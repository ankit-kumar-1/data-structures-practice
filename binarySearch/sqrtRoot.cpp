#include <iostream>
using namespace std;

int IntSqrt(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int sqrt = mid * mid;
        if (sqrt == n)
        {
            return mid;
        }
        else if (sqrt < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;

    int tempSol = IntSqrt(n);
    cout << "Answer is " << morePrecision(n, 3, tempSol);
    return 0;
}