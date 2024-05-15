#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int check(vector<int> &arr,int mid)
{
    int n=arr.size();
    int count=1;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(x+arr[i]<=mid)
        {
            x+=arr[i];

        }
        else
        {
            count++;
            x=arr[i];
        }
    }
    return count;
}
    int splitArray(vector<int>& arr, int k) {
  int n=arr.size();
   int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(arr[i],maxi);
        sum+=arr[i];
    }
    int low=maxi;
    int high =sum;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int ans=check(arr,mid);
        if(ans<=k)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }  
    return low;    
    }
};
int main(){
     
return 0;
}