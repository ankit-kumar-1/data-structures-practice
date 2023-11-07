#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;
    int ans = -1;
    for (int i = min(x, y);; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
}