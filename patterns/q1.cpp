/* 1234
   1234
   1234
   1234*/

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}