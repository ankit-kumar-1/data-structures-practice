#include <iostream>
using namespace std;
int main()
{
    int n, isPrime = 1;
    cout << "Enter number";
    cin >> n;

    if (n <= 1)
    {
        isPrime = 0;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << "not Prime";
            }
            else
            {
                cout << "prime";
            }
        }
    }
}
