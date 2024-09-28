#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int m = 1e9 + 7;

    vector<int> nsel(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, +1);
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[st.top()] > arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            else
            {
                ans[i] = -1;
            }
            st.push(i);
        }
        return ans;
    }

    vector<int> nser(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, -1);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            else
            {
                ans[i] = n;
            }
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> left = nsel(arr);
        vector<int> right = nser(arr);
        long long ans = 0;
        // const int mod = 1e9 + 7;
        for (int i = 0; i < arr.size(); i++)
        {
            ans = (ans + (long long)arr[i] * (i - left[i]) * (right[i] - i)) % m;
        }
        return ans;
    }
};
int main()
{

    return 0;
}