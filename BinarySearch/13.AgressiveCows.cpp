#include<bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"
bool canpossible(vector<int> &arr,int dist,int k)
{
    //we are gradually increasing mid or dist
    int n = arr.size();
    int countcow=1; 
    int last=arr[0];//first cow always at 0 index
    for(int i=1;i<n;i++)
    {
        if(arr[i]-last >=dist)
        {
            countcow++;
            last=arr[i];

        }
        if(countcow>=k) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &arr, int k)
{
    //    Write your code here.
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int ans=INT_MIN;
    int low=1;

    int high =arr[n-1]-arr[0];
    while(low<=high)
    {
        int mid=(low+high )/2;
        if(canpossible(arr,mid,k)==true)
        {
            //eleminate left half as tey are smaller  and we have to find max distance
            low=mid+1;
            ans=max(ans,mid);
        }
        else
        {
            //not valid as they are greater than k
            high=mid-1;
        }
    }
    return ans;//or high 

}
int main(){
     
return 0;
}