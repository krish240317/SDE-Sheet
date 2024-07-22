#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int find(int i, int j, vector<vector<int>> &arr, vector<vector<int>> &dp)
    {

        // one omer case added
        if (i >= 0 && j >= 0 && arr[i][j] == 1)
            return 0;

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
        int up = find(i - 1, j, arr, dp);
        int left = find(i, j - 1, arr, dp);
        return dp[i][j] = left + up;
    }
    int uniquePathsWithObstacles(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = find(n - 1, m - 1, arr, dp);
        return ans;
    }
};

int main()
{

    return 0;
}