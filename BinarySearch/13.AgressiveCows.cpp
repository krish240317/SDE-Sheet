#include<bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"
bool canpossible(vector<int> &arr,int dist,int k)
{
    int n =arr.size();
    int countcow=1; 
    int last=arr[0];
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

    int low=1;

    int high =arr[n-1]-arr[0];
    while(low<=high)
    {
        int mid=(low+high )/2;
        if(canpossible(arr,mid,k)==true)
        {
            //eleminate left half as tey are smaller 
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return high;

}
int main(){
     
return 0;
}