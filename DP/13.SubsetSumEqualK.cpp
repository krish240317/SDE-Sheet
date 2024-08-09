#include <bits/stdc++.h>
using namespace std;
bool findsum(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    // base case
    if (target == 0)
        return true;
    if (ind == 0)
    {
        //target kam hoke aaya he 
        if (target == arr[0])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (dp[ind][target] != -1)
        return dp[ind][target];

    bool notake = findsum(ind - 1, target, arr, dp);
    bool take = false;
    // iff target greater than arr[i] then only take
    if (target >= arr[ind])
    {
        take = findsum(ind - 1, target - arr[ind], arr, dp);
    }

    // if any one gives target return true
    return dp[ind][target] = take || notake;
}
bool isSubsetSum(vector<int> arr, int sum)
{
    // code here
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
    if (findsum(n - 1, sum, arr, dp))
        return 1;
    return 0;
}
int main()
{

    return 0;
}