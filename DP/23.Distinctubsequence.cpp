#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    const int k = 1e9 + 7;
    int fun(int i, int j, string s1, string s2, vector<vector<int>> &dp)
    {
        if (j < 0)
        {
            // find match
            return 1;
        }
        if (i < 0)
        {
            // not fiound match return 0;
            return 0;
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        int result = 0;

        if (s1[i] == s2[j])
        {
            int takeboth = fun(i - 1, j - 1, s1, s2, dp); // movee both as equal OR move one and find other
            int takenone = fun(i - 1, j, s1, s2, dp);
            result = (takeboth + takenone) % k;
        }
        else
        {
            result = fun(i - 1, j, s1, s2, dp); // move i as not matching 
        }
        dp[i][j] = result;
        return result;
    }
    int numDistinct(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = fun(n - 1, m - 1, s, t, dp);
        return ans;
    }
};

int main()
{

    return 0;
}