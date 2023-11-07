#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(mid<e && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(mid>0 && arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else if(arr[s]>=arr[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[]={3,4,5,6,1,2};
      cout<<"Index of pivot is "<<pivot(arr,6);
      return 0;
}