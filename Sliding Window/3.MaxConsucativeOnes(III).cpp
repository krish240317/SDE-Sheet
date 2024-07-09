#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxlength = 0;
        int n = nums.size();
        int zeros = 0;
        int l = 0, r = 0;
        while (r < n)
        {
            if (nums[r] == 0)
                zeros++;

            if (zeros > k)
            {
                if (nums[l] == 0)
                {
                    zeros--;
                }
                l++;
            }
            if (zeros <= k)
            {
                maxlength = max(maxlength, r - l + 1);
            }
            r++;
        }
        return maxlength;
    }
};
int main()
{

    return 0;
}