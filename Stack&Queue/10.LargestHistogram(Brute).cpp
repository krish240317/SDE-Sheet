#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> NSR(vector<int> arr, int n)
    {
        vector<int> v;
        stack<pair<int, int>> s;
        for (int i = n - 1; i >= 0; i--)
        {
            while (s.size() > 0 && (s.top()).first >= arr[i])
                s.pop();

            if (s.size() == 0)
                v.push_back(n);
            else
                v.push_back((s.top()).second);

            s.push({arr[i], i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
    vector<int> NSL(vector<int> arr, int n)
    {
        vector<int> v;
        stack<pair<int, int>> s;
        for (int i = 0; i < n; i++)
        {
            while (s.size() > 0 && (s.top()).first >= arr[i])
                s.pop();

            if (s.size() == 0)
                v.push_back(-1);
            else
                v.push_back((s.top()).second);

            s.push({arr[i], i});
        }
        return v;
    }
    int MAH(vector<int> arr, int n)
    {
        vector<int> v1 = NSR(arr, n);
        vector<int> v2 = NSL(arr, n);
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x = (v1[i] - v2[i] - 1);
            mx = max(mx, x * arr[i]);
        }
        return mx;
    }
    int maximalRectangle(vector<vector<char>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            int x = arr[0][j] - '0';
            v.push_back(x);
        }

        int mx = MAH(v, m);

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '0')
                    v[j] = 0;
                else
                    v[j] += arr[i][j] - '0';
            }
            mx = max(mx, MAH(v, m));
        }

        return mx;
    }
};
int main()
{

    return 0;
}