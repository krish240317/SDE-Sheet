#include<bits/stdc++.h>
using namespace std;

//apply dp 
//TLE--->
/*int findcount(int i,int j,int n,int m,vector<int> &dp)
{
    if(i>=n ||j>=m ) return 0;
    if(i==(n-1) && j==(m-1)) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=findcount(i+1,j,n,m,dp) + findcount(i,j+1,n,m,dp);
}*/

class Solution {
public:

// int ncr(int n,int r)    //nCr                   
// {
//     if(r==0 || n==r) return 1;
//     return ncr(n-1,r-1)+ncr(n-1,r); 
    
// }
int ncr(int n,int r)
{
    double ans=1;

    for(int i=1;i<=r;i++)
    {
        ans=ans*(n-r+i);
        ans=ans/(i);
    }
    return int(ans);
}

    int uniquePaths(int n, int m) {
           //total no of steps require (m-1)+(n-1)=m+n-2
    int N=(m+n)-2;
    int r=n-1;
    int ans=ncr(N,r);
    return ans;
    }
};
int main(){
     
return 0;
}