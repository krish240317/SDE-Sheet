#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int solve(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (target == 0 && arr[0] == 0)
            return 2;
        if (arr[0] == target || target == 0)
            return 1;
        return 0;
    }
    if (dp[ind][target] != -1)
        return dp[ind][target];

    int nottake = solve(ind - 1, target, arr, dp);
    int take = 0;
    if (arr[ind] <= target)
    {
        take = solve(ind - 1, target - arr[ind], arr, dp);
    }
    return dp[ind][target] = (take + nottake) % mod;
}
int findWays(vector<int> &arr, int k)
{
    // Write your code here.
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    int ans = solve(n - 1, k, arr, dp);
    return ans;
}

int main()
{

    return 0;
}