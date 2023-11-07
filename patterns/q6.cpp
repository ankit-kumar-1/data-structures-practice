/*
1
23
456
78910
*/

#include <iostream>
using namespace std;

int main()
{
    int cnt = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}