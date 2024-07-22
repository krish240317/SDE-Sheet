#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findmax(int i, int j1, int j2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
    {
        // base case
        // out of Bound Case
        int m = grid[0].size();
        int n = grid.size();
        if (j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
        {
            return -1e8; // large negative number
        }
        if (i == n - 1) // reach end
        {
            if (j1 == j2)
            {
                // count only one box
                return grid[i][j1];
            }
            else
            {
                return grid[i][j1] + grid[i][j2];
            }
        }
        if (dp[i][j1][j2] != -1)
            return dp[i][j1][j2];
        // explore paths
        int maxi = INT_MIN;
        // Try all possible moves (up, left, right) for both positions (j1, j2)
        for (int di = -1; di <= 1; di++)
        {
            for (int dj = -1; dj <= 1; dj++)
            {
                int ans;
                if (j1 == j2)
                {
                    // count 1 only
                    ans = grid[i][j1] + findmax(i + 1, j1 + di, j2 + dj, grid, dp);
                }
                else
                {
                    // count both j1 and j2
                    //on one j1+di move there is 3 way j2 can go that is j2 +dj
                    ans = grid[i][j1] + grid[i][j2] + findmax(i + 1, j1 + di, j2 + dj, grid, dp);
                }
                maxi = max(ans, maxi);
            }
        }
        return dp[i][j1][j2] = maxi;
    }
    int cherryPickup(vector<vector<int>> &grid)
    {

        int m = grid[0].size();
        int n = grid.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
        int ans = findmax(0, 0, m - 1, grid, dp);
        return ans;
    }
};

int main()
{

    return 0;
}