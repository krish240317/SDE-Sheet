#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int find(int n, int m, vector<vector<int>> &arr, vector<vector<int>> &dp)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                {
                    dp[i][j] = 0;
                    continue;
                }
                // Base condition: If we are at the top-left cell (0, 0), there is one way.
                if (i == 0 && j == 0)
                {
                    dp[i][j] = 1;
                    continue; // Skip the rest of the loop and continue with the next iteration.
                }
                int up = 0;
                int left = 0;

                if (i > 0)
                    up = dp[i - 1][j];
                if (j > 0)
                    left = dp[i][j - 1];

                // Calculate the number of ways to reach the current cell by adding 'up' and 'left'.
                dp[i][j] = up + left;
            }
        }
        return dp[n - 1][m - 1];
    }
    int uniquePathsWithObstacles(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = find(n, m, arr, dp);
        return ans;
    }
};
int main()
{

    return 0;
}