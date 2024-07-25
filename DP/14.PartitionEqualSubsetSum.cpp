#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool findsum(int target, vector<int> &arr, vector<vector<bool>> &dp)
    {
        // base case
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = true;
        }
        // Base case: If the first element of 'arr' is less than or equal to 'k', set dp[0][arr[0]] to true
        if (arr[0] <= target)
        {
            dp[0][arr[0]] = true;
        }
        // Fill the DP array iteratively
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= target; j++)
            {
                bool notake = dp[i - 1][j];
                bool take = false;
                if (arr[i] <= j)
                {
                    take = dp[i - 1][j - arr[i]];
                }
                dp[i][j] = take || notake;
            }
        }

        return dp[n - 1][target];
    }

    bool canPartition(vector<int> &arr)
    {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        vector<vector<bool>> dp(n, vector<bool>((sum / 2) + 1, false));
        if (sum % 2 == 1)
        {
            return false;
        }
        if (findsum(sum / 2, arr, dp))
        {
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}