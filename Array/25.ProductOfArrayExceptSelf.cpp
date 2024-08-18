#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &arr)
    {

        int n = arr.size();
        vector<int> p(n);
        vector<int> s(n);
        p[0] = arr[0];
        s[n - 1] = arr[n - 1];
        vector<int> ans(n);
        for (int i = 1; i < n; i++)
        {
            p[i] = p[i - 1] * arr[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            s[i] = s[i + 1] * arr[i];
        }
        ans[0] = s[1];
        ans[n - 1] = p[n - 2];
        for (int i = 1; i < n - 1; i++)
        {
            ans[i] = p[i - 1] * s[i + 1];
        }
        return ans;
    }
};

int main()
{

    return 0;
}