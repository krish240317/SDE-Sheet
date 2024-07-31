#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findm(int ind, int prev, vector<int> &nums, vector<vector<int>> &dp)
    {
        int n = nums.size();
        //base case 
        if (ind == n)
            return 0;
            //insdex prev+1 as taken 0 base indexing so -1+1=0 (OneBaseIndexing)
        if (dp[ind][prev + 1] != -1)
            return dp[ind][prev + 1];

        // not take case
        int nt = 0;
        
        nt = 0 + findm(ind + 1, prev, nums, dp);
        int tk = 0;
        if (prev == -1 || nums[ind] > nums[prev])
        {
            tk = 1 + findm(ind + 1, ind, nums, dp);
        }
        return dp[ind][prev + 1] = max(tk, nt);
    }
    int lengthOfLIS(vector<int> &nums)
    {

        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        int ans = findm(0, -1, nums, dp);
        return ans;
    }
};
int main()
{

    return 0;
}