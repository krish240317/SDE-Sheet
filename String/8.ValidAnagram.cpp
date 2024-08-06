#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> m;
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            m[t[i] - 'a']--;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i] - 'a'] != 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}