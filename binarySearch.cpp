#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {3, 4, 5, 7, 8, 9};
    int odd[5] = {4, 5, 6, 7, 8};

    int evenArray = binarySearch(even, 6, 3);
    cout << evenArray << endl;

    int oddArray = binarySearch(odd, 5, 6);
    cout << oddArray << endl;
}