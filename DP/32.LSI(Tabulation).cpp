#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findm(int ind, int prev, vector<int> &nums, vector<vector<int>> &dp, int n)
    {
        for (int ind = n - 1; ind >= 0; ind--)
        {
            for (int prev = ind - 1; prev >= -1; prev--)
            {
                int nt = 0 + dp[ind + 1][prev + 1];
                int tk = 0;
                if (prev == -1 || nums[ind] > nums[prev])
                {
                    tk = 1 + dp[ind + 1][ind + 1];
                }
                dp[ind][prev + 1] = max(tk, nt);
            }
        }
        return dp[0][0];
    }
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        int ans = findm(0, -1, nums, dp, n);
        return ans;
    }
};
int main()
{

    return 0;
}