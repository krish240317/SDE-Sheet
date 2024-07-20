#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void generate(vector<int> &v, vector<int> &arr, vector<vector<int>> &ans, int n, int index)
    {
        if (index == n)
        {
            ans.push_back(v);
            // return if gget the subsequence
            return;
        }
        //take
        v.push_back(arr[index]);
        generate(v, arr, ans, n, index + 1);
        // nottake
        v.pop_back();
        generate(v, arr, ans, n, index + 1);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> v;
        int n = nums.size();
        generate(v, nums, ans, n, 0);
        return ans;
    }
};
int main()
{

    return 0;
}