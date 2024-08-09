#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> mp;
        vector<string> ans;
        int n = s.size();
        if (n <= 10)
            return ans;

        for (int i = 0; i <= n - 10; i++)
        {
            string x = s.substr(i, 10);
            mp[x]++;
        }

        for (auto it : mp)
        {
            if (it.second > 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}