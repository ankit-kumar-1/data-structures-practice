#include<iostream>
using namespace std;

int firstOcc(int arr[],int n ,int target)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        int midEle=arr[mid];
        if(midEle==target)
        {
            ans=mid;
            s=mid+1;
        }

        if(target<midEle)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[]={2,4,4,4,10,12};

    cout<<firstOcc(arr,6,4);
    return 0;
}