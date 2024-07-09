#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
int getLengthofLongestSubstring(string s, int k)
{
    // Write your code here.

    int r = 0, l = 0, maxlen = 0;
    int n = s.length();
    map<char, int> m;
    while (r < n)
    {

        m[s[r]]++;
        if (m.size() > k)
        {
            m[s[l]]--;
            if (m[s[l]] == 0)
            {
                m.erase(s[l]);
            }
            l++;
        }
        else if (m.size() <= k)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    return maxlen;
}
int main()
{

    return 0;
}