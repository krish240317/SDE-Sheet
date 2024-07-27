#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findp(int ind, int buy, vector<int> &arr, vector<vector<vector<int>>> &dp, int cap)
    {
        // buy==0 means we can buy and 1 means we can sell
        // base case when reach n and cap==0
        if (cap == 0)
            return 0;
        int n = arr.size();
        if (ind == n)
            return 0;

        if (dp[ind][buy][cap] != -1)
            return dp[ind][buy][cap];
        long long profit;

        if (buy == 0)
        {
            // we can buy
            // max(notbuy,buy);
            profit = max(0 + findp(ind + 1, 0, arr, dp, cap), (-arr[ind] + findp(ind + 1, 1, arr, dp, cap)));
        }
        if (buy == 1)
        {
            // we can sell
            // max(notsell,sell);
            profit = max(0 + findp(ind + 1, 1, arr, dp, cap), arr[ind] + findp(ind + 1, 0, arr, dp, cap - 1));
        }
        return dp[ind][buy][cap] = profit;
    }
    int maxProfit(vector<int> &arr)
    {
        int n = arr.size();
        // vector<vector<int>> dp(n, vector<int>(2, -1));
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        int ans = findp(0, 0, arr, dp, 2);
        return ans;
    }
};
int main()
{

    return 0;
}