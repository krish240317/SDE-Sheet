#include <bits/stdc++.h>
using namespace std; 

int fun(int i,int j,vector<int> &arr,vector<vector<int>> &dp)
{
    //at any point i==j (one single matrix)
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    
    int mini=INT_MAX;

    for(int k=i;k<=j-1;k++)
    {
        int steps =fun(i,k,arr,dp)+fun(k+1,j,arr,dp)+arr[i-1]*arr[k]*arr[j];
        mini=min(mini,steps);
    }
    return dp[i][j]=mini;
}
int matrixMultiplication(vector<int> &arr, int n)
{
    // Write your code here.
    //our matrix exsist between 1 to n-1
    int i=1;
    int j=n-1;
    vector<vector<int>> dp(n,vector<int>(n,-1));
    int ans =fun(i,j,arr,dp);
    return ans ;
}
int main()
{

    return 0;
}