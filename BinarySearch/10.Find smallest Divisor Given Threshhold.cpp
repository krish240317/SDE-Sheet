#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool check(vector<int> & arr,int d,int t)
{
    int n = arr.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=ceil(double(arr[i])/double(d));
       
    }
     if(ans>t) return false;
    return true;
}
    int smallestDivisor(vector<int>& nums, int t) {
        int n =nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi = max(nums[i],maxi);
        }
        for(int i=1;i<=maxi;i++)
        {
            if(check(nums,i,t))
            {
                return i ;
            }
        }
        return -1;
    }
};
int main(){
     
return 0;
}