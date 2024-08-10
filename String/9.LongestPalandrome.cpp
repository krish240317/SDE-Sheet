#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        int n = s.length();
        map<char, int> m;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            // push in map
            m[s[i]]++;
            // check its freq even or odd if odd increase frq else decrease
            if (m[s[i]] % 2 != 0)
            {
                // odd frequency
                odd++;
            }
            else
            {
                odd--;
            }
        }
        if (odd > 0)
        {
            return n - odd + 1;
        }
        return n;
    }
};

int main()
{

    return 0;
}