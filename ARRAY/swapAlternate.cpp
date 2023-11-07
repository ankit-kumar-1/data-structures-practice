#include <iostream>

using namespace std;

void swapAlternate(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
        i = i + 2;
    }
}

int main()
{
    int arr[] = {4, 3, 5, 6, 4, 2, 5};

    swapAlternate(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}