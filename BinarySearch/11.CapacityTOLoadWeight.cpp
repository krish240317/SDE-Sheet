#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int reqday(vector<int>& arr, int cap)
{
    int n =arr.size();
    int days=1;
    int load=0;
    for(int i=0;i<n;i++)
    {
        if(load+arr[i]>cap)
        {
        days=days+1;
        load=arr[i];
        }
        else
        {
            load+=arr[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& arr, int days) {
        // we know the range 
        // max element to sum of all
        int n = arr.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(arr[i],maxi);
            sum+=arr[i];
        }
        for(int i=maxi;i<=sum;i++)
        {
            int req=reqday(arr,i);
            if(req<=days)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{

    return 0;
}