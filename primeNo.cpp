#include <iostream>
using namespace std;

int main()
{
    int x, flag = 0;
    cout << "Enter a positive number" << endl;
    cin >> x;
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            cout << "Not a Prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime";
    }
}
