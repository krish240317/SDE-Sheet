#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &s)
    {
        int n = s.size();
        sort(s.begin(), s.end());
        string first = s[0];
        string last = s[n - 1];
        string ans = "";
        for (int i = 0; i < first.length(); i++)
        {
            if (first[i] != last[i])
            {
                break;
            }
            ans.push_back(first[i]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}