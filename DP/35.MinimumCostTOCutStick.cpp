#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findmini(int i, int j, vector<int> &arr, vector<vector<int>> &dp)
    {
        if (i > j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int mini = 1e9;

        for (int ind = i; ind <= j; ind++)
        {
            int cost = (arr[j + 1] - arr[i - 1]) + findmini(i, ind - 1, arr, dp) + findmini(ind + 1, j, arr, dp);
            mini = min(mini, cost);
        }
        return dp[i][j] = mini;
    }
    int minCost(int n, vector<int> &arr)
    {

        int c = arr.size();
        arr.push_back(n);
        vector<vector<int>> dp(c + 1, vector<int>(c + 1, -1));
        arr.insert(arr.begin(), 0);
        sort(arr.begin(), arr.end());
        return findmini(1, c, arr, dp);
    }
};

int main()
{

    return 0;
}