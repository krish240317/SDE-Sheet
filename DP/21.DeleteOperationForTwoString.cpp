#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {

        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        // base case
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
        }
        for (int j = 0; j <= m; j++)
        {
            dp[0][j] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        // int ans =check(n-1,m-1,text1,text2,dp);
        return dp[n][m];
    }
    int minDistance(string s1, string s2)
    {
        int n = s1.size();
        int m = s2.size();
        int ans = longestCommonSubsequence(s1, s2);
        int deletion = abs(n - ans) + abs(m - ans);
        // int insertion = m - ans;
        return deletion;
    }
};
int main()
{

    return 0;
}