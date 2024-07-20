
#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &nums, vector<int> &dp)
{
    if (ind == 0)
    {
        // you have not taken previous so need to take this
        return nums[ind];
    }
    if (ind < 0)
    {
        // case when 1-2 arrises
        return 0;
    }
    if (dp[ind] != -1)
        return dp[ind];

    int take = nums[ind] + solve(ind - 2, nums, dp);

    //  As we don’t pick the current element, we can consider the adjacent element in the subsequence.
    int nottake = solve(ind - 1, nums, dp);
    return dp[ind] = max(take, nottake);
}
int maximumNonAdjacentSum(vector<int> &nums)
{
    // Write your code here.
    int n = nums.size();
    vector<int> dp(n, -1);

    return solve(n - 1, nums, dp);
}
int main()
{

    return 0;
}