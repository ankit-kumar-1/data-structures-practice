#include<iostream>
using namespace std;

int merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i=0,j=0,k=0;
   
   while(i<n && j<m)
   {
    if(arr1[i]<arr2[j])
    arr3[k++] = arr1[i++];

    else
    arr3[k++] = arr2[j++];
   }

   while(i<n)
   {
    arr3[k++] = arr1[i++];
   }
   while(j<m)
   {
    arr3[k++] = arr2[j++];
   }
}

void printArray(int ans[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< ans[i]<<" ";
    }
}
int main()
{
    int arr1[5]={2,3,4,5,6};
    int arr2[6] ={5,7,9,23,16,17};

    int arr3[11]={0};

     merge(arr1,5,arr2,6,arr3);

     printArray(arr3,11);
    
    return 0;
}