#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
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
    vector<int> nsl(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++)
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
    int largestRectangleArea(vector<int> &arr)
    {
        vector<int> nr = nsr(arr);
        vector<int> nl = nsl(arr);
        int n = arr.size();
        for (auto it : nr)
        {
            cout << it << " ";
        }
        cout << endl;
        for (auto it : nl)
        {
            cout << it << " ";
        }
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i] * (nr[i] - nl[i] - 1));
        }
        return maxi;
    }
};
int main()
{

    return 0;
}