#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];
            // there are two false case
            // 1.(single map solution ) ie.if character is present in map and not map to previous character
            // 2.(2 map solution ) ie.if character 2 which is maped is present in map 2 and maped to other character then ch1
            if (mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 || mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)
            {
                return false;
            }
            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        return true;
    }
};

int main()
{

    return 0;
}