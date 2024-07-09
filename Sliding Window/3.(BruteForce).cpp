#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxlength = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int zeros = 0;
            for (int j = i; j < n; j++)
            {
                if (nums[j] == 0)
                    zeros++;
                if (zeros <= k)
                {
                    int length = j - i + 1;
                    maxlength = max(maxlength, length);
                }
                else
                {
                    break;
                }
            }
        }
        return maxlength;
    }
};
int main()
{

    return 0;
}