#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

vector<int> getintersection(int arr1[],int n,int arr2[], int m)
{
//     int i=0;
//     int j=0;
//     vector<int>s;

//     while(i<n&&j<m)
//     {
//         if(arr1[i]<arr2[j])
//         {
//             if(s.size()==0||s.back()!=arr1[i])
//             i++;
//         }
//         if(arr1[i]>arr2[j])
//         {
//             if(s.size()==0||s.back()!=arr2[j])
//             j++;
//         }
//         else{
//             s.push_back(arr1[i]);
//             i++;
//             j++;
            
//         }
//     }   int j=0;
 
// return s;


vector<int>ans;
int i=0; int j=0;

while(i<n&&j<m)
{
    if(arr1[i]==arr2[j])
    {
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j])
    {
        i++;
    }
    else{
        j++;
    }
}

return ans;
 }


int main()
{
    int arr1[]={1,2,2,3,3,4};
    int arr2[]={2,2,3,3,5};

    vector<int>ans = getintersection(arr1,6,arr2,5);
    for(int i:ans)
    {
        cout<<i<<" ";
    }

    return 0;
}