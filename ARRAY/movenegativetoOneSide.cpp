#include<iostream>
using namespace std;  

void moveNegative(int arr[],int n)
{

    int j=0;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
         
    }
}

int main()
{
    int arr[]={3,-1,2,-4,-6,-4,5};
    moveNegative(arr,7);

    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}