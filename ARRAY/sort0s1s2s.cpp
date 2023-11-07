#include<iostream>
using namespace std;


void sortZeroOneTwo(int arr[],int n )
{
    int zero=0, one=0, two=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        zero++;
        else if(arr[i]==1)
        one++;
        else
        two++;
    }
    int i=0;
    while(zero--)
    {
        arr[i]=0;
        i++;
    }
    while(one--)
    {
        arr[i]=1;
        i++;
    }
    while(two--)
    {
        arr[i]=2;
        i++;
    }

}
int main()
{

int arr[]={1,0,2,2,0,1,1};
sortZeroOneTwo(arr,7);

for(int i=0;i<7;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}