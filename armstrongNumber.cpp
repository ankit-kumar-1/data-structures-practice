#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int digit = n % 10;
        sum += (digit * digit * digit);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong " << endl;
    }
    else
    {
        cout << "Not a Armstrong";
    }
    return 0;
}