#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int find(int i, int j, vector<vector<int>> &dp)
    {

        if (i == 0 && j == 0)
        {
            // reached end count this path
            return 1;
        }
        if (i < 0 || j < 0)
        {
            // boundry excede
            return 0;
        }
        if (dp[i][j] != -1)
            return dp[i][j];

        // move up
        int up = find(i - 1, j, dp);
        int left = find(i, j - 1, dp);
        return dp[i][j] = left + up;
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int ans = find(m - 1, n - 1, dp);

        return ans;
    }
};
int main()
{

    return 0;
}