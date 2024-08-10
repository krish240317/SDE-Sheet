#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int n = s.size();
        int maxi = INT_MIN;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                count++;
                maxi = max(count, maxi);
            }
            else if (s[i] == ')')
            {
                count--;
            }
        }
        if (maxi == INT_MIN)
            return 0;
        return maxi;
    }
};

int main()
{

    return 0;
}