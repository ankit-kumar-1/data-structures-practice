/*
A
BC
DEF
*/

#include <iostream>
using namespace std;

int main()
{
    char value = 'A';
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    return 0;
}