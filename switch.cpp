#include <iostream>
using namespace std;

int main()
{
    int day = 2;

    switch (day)
    {
    case 1:
        cout << "Sunday";
    case 2:
        cout << "Monday";
    case 3:
        cout << "tuesday";
    default:
        cout << "Invalid";
    }
}