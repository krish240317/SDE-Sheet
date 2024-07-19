#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &arr)
    {
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                // positive
                ans.push_back(arr[i]);
            }
            else
            {
                // negetive
                while (!ans.empty() && ans.back() > 0 && ans.back() < abs(arr[i]))
                {
                    ans.pop_back();
                }

                if (!ans.empty() && ans.back() == abs(arr[i]))
                {
                    // equal elements
                    ans.pop_back();
                }
                else if (ans.empty() || ans.back() < 0)
                {
                    // store negative if empty or already negative in it
                    ans.push_back(arr[i]);
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}