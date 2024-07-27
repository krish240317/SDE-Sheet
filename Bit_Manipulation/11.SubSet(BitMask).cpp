#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        int subsetcount = (1 << n); // 2power n

        for (int i = 0; i < subsetcount; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                // if ith bit is set in binary then  count it in subarray;
                if (i & (1 << j))
                {
                    v.push_back(nums[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
int main()
{

    return 0;
}