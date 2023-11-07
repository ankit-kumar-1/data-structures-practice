#include<iostream>
using namespace std;


int fixedPoint(int arr[], int n)
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]==mid)
        {
            return mid;
        }
        else if(mid<arr[mid])
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
    int arr[]={1,2,4,3,5,6};
    fixedPoint(arr,6);

    return 0;
}