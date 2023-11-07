/* 123
   456
   789
*/

#include <iostream>
using namespace std;

int main()
{
    int cnt = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}