#include<iostream>
using namespace std;


bool linearSearch(int arr[], int n, int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
            return false;

}
int main()
{
    int arr[]={3,5,7,4,2,6,8};
    if(linearSearch(arr,7,66))
    {
        cout<<"Element found";
    }
    else{
        cout<<"element not found";
    }

}