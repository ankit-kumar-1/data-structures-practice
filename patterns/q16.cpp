/*
A
BC
CDE
DEFG
*/

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}