#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
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
    int rob(vector<int> &arr)
    {

        vector<int> arr1;
        vector<int> arr2;
        int n = arr.size();
        if (n == 1)
            return arr[0];

        for (int i = 0; i < n; i++)
        {

            if (i != 0)
                arr1.push_back(arr[i]);
            if (i != n - 1)
                arr2.push_back(arr[i]);
        }
        vector<int> dp(n, -1);
        long long int ans1 = solve(arr1.size() - 1, arr1, dp);
        long long int ans2 = solve(arr2.size() - 1, arr2, dp);

        return max(ans1, ans2);
    }
};
int main()
{

    return 0;
}