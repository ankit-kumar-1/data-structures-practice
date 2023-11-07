#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int n)
{
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,arr[i]);
    }
    return ans;
}

int getMin (int arr[], int n)
{
    int ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,arr[i]);
    }
    return ans;
}

int main(){
    int arr[]={2,3,4,5,32,4,5};
    cout<<"Max no is "<<getMax(arr,7);

    cout<<"Min no is "<<getMin(arr,7);
    return 0;
}