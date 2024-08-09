#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        int k = t.size();
        int n = s.size();
        // if(k>n) return "";
        map<char, int> m;
        for (int i = 0; i < k; i++)
        {
            // inserting t to m
            m[t[i]]++;
        }
        int l = 0;
        int r = 0;
        int mini = 1e7;
        int startind = -1;
        int count = 0;
        while (r < n)
        {
            // now traversing on s string
            // in s string on insertion--> add to map (++)
            //   deletion-->remove from map(--)
            if (m[s[r]] > 0)
            {
                count++;
            }
            // insertion in map
            m[s[r]]--;
            // when count ==m we got our substring with all t's character in it but it is not minimum
            while (count == k)
            {
                // update the length
                if (r - l + 1 < mini)
                {
                    mini = r - l + 1;
                    startind = l;
                }
                // now shrinking our s string to find mini one
                // increasing count as shrinkng
                m[s[l]]++;
                if (m[s[l]] > 0)
                {
                    // decrease count
                    count--;
                }
                l++;
            }
            r++;
        }
        // if(startind)
        return startind == -1 ? "" : s.substr(startind, mini);
    }
};
int main()
{

    return 0;
}