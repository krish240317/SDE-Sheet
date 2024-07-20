#include <bits/stdc++.h>
using namespace std;
int findmax(vector<vector<int>> &arr, int day, int last, vector<vector<int>> &dp)
{
    // base case
    // when reach day 0 find maximum and give it but maximum other than last
    if (dp[day][last] != -1)
        return dp[day][last];

    if (day == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            // find maxi other than last
            if (i != last)
            {
                maxi = max(maxi, arr[0][i]);
            }
        }
        return dp[day][last] = maxi;
    }

    int maxi = 0;
    // do same for others too
    for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {
            int total = arr[day][i] + findmax(arr, day - 1, i, dp);
            maxi = max(total, maxi);
        }
    }
    return dp[day][last] = maxi;
}
int maximumPoints(vector<vector<int>> &points, int n)
{
    // Code here

    int day = n - 1;
    vector<vector<int>> dp(n, vector<int>(4, -1));
    int ans = findmax(points, day, 3, dp);
    return ans;
}
int main()
{

    return 0;
}