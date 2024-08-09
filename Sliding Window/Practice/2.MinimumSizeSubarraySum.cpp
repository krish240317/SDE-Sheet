#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int k, vector<int> &arr)
    {
        int n = arr.size();
        int l = 0;
        int r = 0;
        int mini = INT_MAX;
        int sum = 0;
        while (r < n)
        {
            sum += arr[r];
            while (sum >= k)
            {
                sum -= arr[l];
                mini = min(mini, r - l + 1);
                l++;
            }
            // mini=min(mini,r-l+1);
            r++;
        }
        if (mini == INT_MAX)
            return 0;
        return mini;
    }
};
int main()
{

    return 0;
}