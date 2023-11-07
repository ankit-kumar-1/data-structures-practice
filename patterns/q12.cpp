/*
ABC
DEF
GHI
*/

#include <iostream>
using namespace std;

int main()
{
    char start = 'A';
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {

            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    return 0;
}