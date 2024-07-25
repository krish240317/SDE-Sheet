#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int check(int i1, int i2, string &s1, string &s2, vector<vector<int>> &dp)
    {
        // base case
        if (i1 < 0 || i2 < 0)
            return 0;
        if (dp[i1][i2] != -1)
            return dp[i1][i2];

        if (s1[i1] == s2[i2])
        {
            // match count ++ and call function
            return dp[i1][i2] = 1 + check(i1 - 1, i2 - 1, s1, s2, dp);
        }
        else
        {
            // move one side only and find maximum
            return dp[i1][i2] = max(check(i1 - 1, i2, s1, s2, dp), check(i1, i2 - 1, s1, s2, dp));
        }
    }
    int longestCommonSubsequence(string text1, string text2)
    {

        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = check(n - 1, m - 1, text1, text2, dp);
        return ans;
    }
};
int main()
{

    return 0;
}