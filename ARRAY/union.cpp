#include<iostream>
#include<vector>
using namespace std;

 vector<int> getUnion(int arr1[],int arr2[],int n, int  m)
 {
    vector<int>uni;
   int i=0;
   int j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]<=arr2[j])
        {
            if(uni.size()==0||uni.back()!=arr1[i])
            {
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uni.size()==0||uni.back()!=arr2[j])
            {
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
        
        //element left in arr1

        while(i<n)
        {
            if(uni.back()!=arr1[i])
            {
                uni.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m)
        {
          if(uni.back()!=arr2[j])
          {
            uni.push_back(arr2[j]);
          }
          j++;
        }
        return uni;
 }
 int main()
 {
    int arr1[]={2,3,5,7,9};
    int arr2[]={3,3,4,5,6,7,11,7};

vector<int>ans=getUnion(arr1,arr2,5,8);
for(int i:ans)
cout<<i<<" ";
return 0;
 }