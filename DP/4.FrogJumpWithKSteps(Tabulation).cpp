#include<bits/stdc++.h>
using namespace std;
int solveUtil(int n, vector<int>& height, vector<int>& dp, int k) {
    dp[0] = 0;

    // Loop through the array to fill in the dp array
    for (int i = 1; i < n; i++) {
        int mmSteps = INT_MAX;

        // Loop to try all possible jumps from '1' to 'k'
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                int jump = dp[i - j] + abs(height[i] - height[i - j]);
                mmSteps = min(jump, mmSteps);
            }
        }
        dp[i] = mmSteps;
    }
    return dp[n - 1]; // The result is stored in the last element of dp
}
int minimizeCost(vector<int> &height, int n, int k)
{
    // Code here
    vector<int> dp(n, -1);
    int ans = solveUtil(n-1,height, dp,k);
    return ans;
}
int main(){
     
return 0;
}