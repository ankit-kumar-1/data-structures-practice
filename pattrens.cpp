#include<iostream>
using namespace std;

int main()
{
    int i,j;
    // for(i=1;i<=5;i++)
    // {
    //     for(j=1;j<=5;j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


//  for(i=1;i<=5;i++)
//  {
//     for(j=1;j<=i;j++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//  }

// for(i=1;i<=5;i++)
// {
//     for(j=5;j>=i;j--)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

// for(i=1;i<=5;i++)
// {
//     for(j=5;j>=i;j--)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }

int n=5;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for( int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

}