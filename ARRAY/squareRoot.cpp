#include<iostream>
using namespace std;

long long int squareRoot(int n)
{
           int s=0;
        int e=n;
        long long int ans=-1;
        long long int mid = s+(e-s)/2;
        while(s<=e)
        {
            long long int square=mid*mid;
            
            if(square==n)
            {
                return mid;
            }
            
            else if(square<n)
            {
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
int main()
{
    int n=4;
    cin>>n;
    cout<<squareRoot(4);
}