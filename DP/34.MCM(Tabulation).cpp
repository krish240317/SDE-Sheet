#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

int matrixMultiplication(vector<int> &arr, int n)
{

    vector<vector<int>> dp(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 0;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        // j always at right of i
        for (int j = i + 1; j < n; j++)
        {
            // mini declare everytime
            int mini = 1e9;
            for (int k = i; k < j; k++)
            {
                int steps = dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                mini = min(mini, steps);
            }
            dp[i][j] = mini;
        }
    }
    return dp[1][n - 1];
}

int main()
{

    return 0;
}