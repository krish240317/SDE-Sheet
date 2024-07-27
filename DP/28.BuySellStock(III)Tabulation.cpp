#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int n = arr.size();

        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
        // size n+1 as we are storing at n also

        // base case
        // dp[n][0][] = dp[n][1] = 0;

        long profit = 0;

        for (int ind = n - 1; ind >= 0; ind--)
        {
            for (int buy = 0; buy <= 1; buy++)
            {
                for (int cap = 1; cap <= 2; cap++)
                {
                    if (buy == 0)
                    {
                        // we can buy
                        // max(notbuy,buy);
                        profit = max(0 + dp[ind + 1][0][cap],
                                     (-arr[ind] + dp[ind + 1][1][cap]));
                    }
                    if (buy == 1)
                    {
                        // we can sell
                        // max(notsell,sell);
                        profit = max(0 + dp[ind + 1][1][cap],
                                     arr[ind] + dp[ind + 1][0][cap - 1]);
                    }
                    dp[ind][buy][cap] = profit;
                }
            }
        }
        return dp[0][0][2];
    }
};
int main()
{

    return 0;
}