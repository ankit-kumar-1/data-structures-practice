#include<iostream>
using namespace std;

void bubble(int arr[], int n)
{
    int count=1;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }
}


int main()
{
    int arr[]={4,7,2,7,3,2,8};
   bubble(arr,7);
   for(int i=0;i<7;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}