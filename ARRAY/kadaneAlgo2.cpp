#include<iostream>
#include<limits.h>
using namespace std;


int getMaxSubArr(int arr[], int n)
{
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        maxi=max(maxi,sum);

        if(sum<0)

        sum=0;
    }
    return maxi;
}

int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};

    cout<<getMaxSubArr(arr,8);
}