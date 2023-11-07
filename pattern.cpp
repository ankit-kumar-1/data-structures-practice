#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    while (count <= 15)
    {
        if (count % 2 == 1)
            cout << "***";
        else
            cout << "+++++";
        ++count;
    }
}