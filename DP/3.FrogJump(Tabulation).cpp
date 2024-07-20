#include<bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &heights, vector<int> &dp)
{
    dp[0]=0;
    // if(ind<0) return 0;
    int n=heights.size();
    for(int ind=1;ind<n;ind++)
    {
        int jumptow=1e9;
        int jumpone=dp[ind-1]+abs(heights[ind] - heights[ind - 1]);
        if(ind>1)
        {
            jumptow=dp[ind-2]+abs(heights[ind] - heights[ind - 1]);
        }
        dp[ind]=min(jumpone,jumptow);
    }
    return dp[n-1];
}
int main(){
     
return 0;
}