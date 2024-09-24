#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

int mod = 1e9 + 7;
int solve(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (target == 0 && arr[ind] == 0)
            return 2;
        if (target == arr[0] || target == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
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
int countPartitions(int n, int d, vector<int> &arr)
{
    // Write your code here.
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum - d < 0 || (sum - d) % 2 == 1)
    {
        return 0;
    }
    int target = (sum - d) / 2;
    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    int ans = solve(n - 1, target, arr, dp);
    return ans;
}

int main()
{

    return 0;
}