#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    for (row = 1; row <= 4; row++)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
        }

        for (int col = 1; col <= 4 - row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         // space print
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }