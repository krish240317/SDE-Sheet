#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums)
{
    int posindex = 0; // even
    int negindex = 1; // odd

    int n = nums.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            ans[negindex] = nums[i];
            negindex += 2;
        }
        else
        {
            ans[posindex] = nums[i];
            posindex += 2;
        }
    }
    return ans;
}
int main()
{

    return 0;
}