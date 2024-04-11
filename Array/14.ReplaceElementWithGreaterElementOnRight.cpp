#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int n = arr.size();
        int maxi = INT_MIN;
        vector<int> ans;
        ans.push_back(-1);
        if (n == 1)
            return ans;

        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                ans.push_back(arr[i]);
            }
            else
            {
                ans.push_back(maxi);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{

    return 0;
}