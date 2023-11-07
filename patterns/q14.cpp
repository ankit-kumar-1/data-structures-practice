/*
A
BB
CCC
*/

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 3; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}