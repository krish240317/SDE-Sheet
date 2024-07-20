#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

int solve(int ind, vector<int> &heights, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    // if(ind<0) return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int two = 1e9;
    int one = solve(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    if (ind > 1)
    {
        two = solve(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    }

    return dp[ind] = min(one, two);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n, -1);
    return solve(n - 1, heights, dp);
}
int main()
{

    return 0;
}