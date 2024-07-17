#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> fun(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> nge(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= nums[i])
            {
                st.pop();
            }

            if (i < n)
            {
                if (!st.empty())
                    nge[i] = st.top();
            }
            st.push(nums[i]);
        }
        return nge;
    }

    vector<int> nextGreaterElement(vector<int> &num1, vector<int> &num2)
    {
        int n = num2.size();
        vector<int> ans, mans;
        ans = fun(num2);
        int k = 0;
        for (int i = 0; i < num1.size(); i++)
        {
            // find num of i in ans;
            for (int j = 0; j < num2.size(); j++)
            {
                if (num1[i] == num2[j])
                {
                    mans.push_back(ans[j]);
                }
            }
        }
        return mans;
    }
};
int main()
{

    return 0;
}