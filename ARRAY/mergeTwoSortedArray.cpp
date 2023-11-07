#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
         {
            arr3[k++]=arr1[i++];
         }
         else{
            arr3[k++]=arr2[j];
         }
    }

    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }

    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}

void printArray(int ans[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int arr1[6]={2,3,5,6,8,9};
    int arr2[4]={4,7,10,13};
    int arr3[10]={0};

    merge(arr1,6,arr2,4,arr3);

printArray(arr3, 10);
    return 0;
}