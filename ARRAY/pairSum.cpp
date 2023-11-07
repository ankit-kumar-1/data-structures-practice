
#include<bits/stdc++.h>
using namespace std;


vector<vector<int> > pairSum(int arr[], int n, int target)
{
vector< vector<int> >ans;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==target)
        {
            vector<int>temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            ans.push_back(temp);
        }
    }
}
sort(ans.begin(),ans.end());
return ans;
}

int main()
{


    int arr[]={3,1,4,5,9,13,11};

    pairSum(arr,7,14);

    return 0;
}  