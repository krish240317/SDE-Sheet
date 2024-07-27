#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findp(int ind, int buy, vector<int> &arr, vector<vector<int>> &dp)
    {
        // buy==0 means we can buy and 1 means we can sell
        // base case when reach n
        int n = arr.size();
        if (ind == n)
            return 0;

        if (dp[ind][buy] != -1)
            return dp[ind][buy];
        long long profit;

        if (buy == 0)
        {
            // we can buy
            // max(notbuy,buy);
            profit = max(0 + findp(ind + 1, 0, arr, dp), (-arr[ind] + findp(ind + 1, 1, arr, dp)));
        }
        if (buy == 1)
        {
            // we can sell
            // max(notsell,sell);
            profit = max(0 + findp(ind + 1, 1, arr, dp), arr[ind] + findp(ind + 1, 0, arr, dp));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int> &arr)
    {
        // we will start from 0 base index
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        int ans = findp(0, 0, arr, dp);
        return ans;
    }
};

int main()
{

    return 0;
}