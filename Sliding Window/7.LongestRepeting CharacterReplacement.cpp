#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int n = s.length();
        int maxfreq = 0;
        int maxlen = 0;
        int l = 0, r = 0;
        int m[26] = {0};
        while (r < n)
        {
            m[s[r] - 'A']++;
            maxfreq = max(maxfreq, m[s[r] - 'A']);
            //you can change or delete is size of array - max frequency (other that are counted is can be change or delete )
            int change = (r - l + 1) - maxfreq; // length of string - maxfreq
            if (change <= k)
            {
                maxlen = max(maxlen, r - l + 1);
            }
            else
            {
                m[s[l] - 'A']--;
                // update maxfreq
                //NOT NEEDED 
                // maxfreq = 0;
                // for (int i = 0; i < n; i++)
                //     maxfreq = max(maxfreq, m[s[i] - 'A']);
                l++;
            }
            r++;
        }
        return maxlen;
    }
};
int main()
{

    return 0;
}