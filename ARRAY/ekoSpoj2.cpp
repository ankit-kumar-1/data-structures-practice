
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int mid, int arr[], int n, int target)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int diff=0;
        if(arr[i]>diff)
        
            diff=arr[i]-mid;

            sum=sum+diff;

    }
    if(sum>=target)
        
            return true;
        
        else
            return false;
}

int maxHeight(int arr[], int n, int target)
{
    sort(arr,arr+n);
    int s=0;
    int e=arr[n-1];
    int ans = -1;

    while(s<=e)
    {
       int mid = s+(e-s)/2;

       if(isPossible(mid, arr, n, target))
       {
        ans=mid;
        s=mid+1;
       }
       else{
        e=mid-1;
       }

   }
   return ans;
}

int main()
{
    int arr[] = {15,8,18,6};
    int target=30;
    int ans = maxHeight(arr, 4, 30);

    cout<< ans;

    return 0;
}