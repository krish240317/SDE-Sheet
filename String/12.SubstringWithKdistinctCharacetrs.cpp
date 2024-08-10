#include <bits/stdc++.h>
using namespace std;

#include "bits/stdc++.h"
int fun(string &s, int k)
{
    if (k < 0)
        return 0;
    int l = 0;
    int r = 0;
    int count = 0;
    map<char, int> m;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;

        while (m.size() > k)
        {
            m[s[l]]--;
            if (m[s[l]] == 0)
            {
                m.erase(s[l]);
            }
            l++;
        }
        count += r - l + 1;
        r++;
    }
    return count;
}
int countSubStrings(string s, int k)
{
    // Write your code here.
    long long int ans = fun(s, k) - fun(s, k - 1);
    return ans;
}

int main()
{

    return 0;
}