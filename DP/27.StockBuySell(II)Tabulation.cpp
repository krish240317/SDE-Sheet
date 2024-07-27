
#include <bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"
long getMaximumProfit(long *arr, int n)
{
    // Write your code here
    // int n=arr.size();
    vector<vector<long>> dp(n + 1, vector<long>(2, -1)); // size n+1 as we are storing at n also

    // base case
    dp[n][0] = dp[n][1] = 0;

    long profit = 0;

    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            if (buy == 0)
            {
                // we can buy
                // max(notbuy,buy);
                profit = max(0 + dp[ind + 1][0],
                             (-arr[ind] + dp[ind + 1][1]));
            }
            if (buy == 1)
            {
                // we can sell
                // max(notsell,sell);
                profit = max(0 + dp[ind + 1][1],
                             arr[ind] + dp[ind + 1][0]);
            }
            dp[ind][buy] = profit;
        }
    }
    return dp[0][0];
}

int main()
{

    return 0;
}