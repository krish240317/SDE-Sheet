#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nsl(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
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
            st.push(i);
        }
        return ans;
    }
    vector<int> nsr(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, n);
        stack<int> st;
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
            st.push(i);
        }
        return ans;
    }

    vector<int> ngl(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[st.top()] < arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    vector<int> ngr(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[st.top()] <= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }
    long long subArrayRanges(vector<int> &arr)
    {

        vector<int> sl = nsl(arr);
        vector<int> sr = nsr(arr);
        vector<int> gl = ngl(arr);
        vector<int> gr = ngr(arr);
        long long ans = 0;
        long long ans2 = 0;
        // long long mans=0;
        for (int i = 0; i < arr.size(); i++)
        {
            ans = (ans + (long long)arr[i] * (i - sl[i]) * (sr[i] - i));
        }
        for (int i = 0; i < arr.size(); i++)
        {
            ans2 = (ans2 + (long long)arr[i] * (i - gl[i]) * (gr[i] - i));
        }
        return ans2 - ans;
    }
};
int main()
{

    return 0;
}