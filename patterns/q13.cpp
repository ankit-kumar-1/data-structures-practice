/*
ABC
BCD
CDE
*/

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= 3; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}