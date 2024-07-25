#include <bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2)
{
    // Write your code here.

    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    // we will do shift i.e one base indexeing
    for (int i = 0; i <= n; i++)
    {
        //-1 case in recursion
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    int ans = -1e8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                // match
                int val = 1 + dp[i - 1][j - 1];
                dp[i][j] = val;
                ans = max(val, ans);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}