#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int findDulicate(int arr[], int n) 
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }

    for(int i=0;i<n ;i++)
    {
        ans=ans^i;
    }
    return ans;
    }

    int main()
    {
        int arr[]={1,2,3,3,4};
       cout<< findDulicate(arr,5);

        return 0;
    }