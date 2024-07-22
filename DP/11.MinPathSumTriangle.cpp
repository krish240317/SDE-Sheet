#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findmin(int i, int j, int n, int m, vector<vector<int>> &arr, vector<vector<int>> &dp)
    {
        if (i == n - 1)
            return arr[n - 1][j];
        if (dp[i][j] != -1)
            return dp[i][j];

        int down = arr[i][j] + findmin(i + 1, j, n, m, arr, dp);
        int digo = arr[i][j] + findmin(i + 1, j + 1, n, m, arr, dp);
        return dp[i][j] = min(down, digo);
    }
    int minimumTotal(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = findmin(0, 0, n, m, arr, dp);
        return ans;
    }
};

int main()
{

    return 0;
}