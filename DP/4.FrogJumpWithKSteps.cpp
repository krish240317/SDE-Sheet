#include <bits/stdc++.h>
using namespace std;
int findmin(vector<int> &arr, int ind, int k, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int mini = INT_MAX;
    // do for not 1 and 2 steps for all k steps
    for (int j = 1; j <= k; j++)
    {
        // Ensure that we do not jump beyond the beginning of the array
        if (ind - j >= 0)
        {
            int jump = findmin(arr, ind - j, k, dp) + abs(arr[ind] - arr[ind - j]);
            mini = min(mini, jump);
        }
    }
    return dp[ind] = mini;
}
int minimizeCost(vector<int> &height, int n, int k)
{
    // Code here
    vector<int> dp(n, -1);
    int ans = findmin(height, n - 1, k, dp);
    return ans;
}
int main()
{

    return 0;
}