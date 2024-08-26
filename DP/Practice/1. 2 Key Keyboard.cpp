#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int currentA, int clipA, int n, vector<vector<int>> &dp)
    {
        if (currentA == n)
        {
            // reach at equal lwngth(our ans) return 0;
            return 0;
        }
        if (currentA > n)
            return 1e8;
        if (dp[currentA][clipA] != -1)
            return dp[currentA][clipA];

        int copypaste = 1 + 1 + solve(currentA + currentA, currentA, n, dp); // solve(newCurrentA,newClipA)
        int paste = 1 + solve(currentA + clipA, clipA, n, dp);
        return dp[currentA][clipA] = min(copypaste, paste);
    }
    int minSteps(int n)
    {
        if (n == 1)
            return 0;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return 1 + solve(1, 1, n, dp); // 1operation for copy (has to do it)+solve(currentA,clipA,n)
    }
};

int main()
{

    return 0;
}