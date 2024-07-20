#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &nums, vector<int> &dp)
{
    int n = nums.size();
    dp[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        // if negative then tere will be arr[i] in take ;
        int take = nums[i];
        if (i > 1)
        {
            take = nums[i] + dp[i - 2];
        }
        // not take
        int nottake = 0 + dp[i - 1];

        dp[i] = max(take, nottake);
    }
    return dp[n - 1];
    // int take= nums[ind]+solve(ind-2,nums,dp);
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