#include <bits/stdc++.h>
using namespace std;
int search(string ptrn, string txt)
{
    // code here
    unordered_map<char, int> mp; // how possible taking int,int also works
    for (auto ch : ptrn)
    {
        mp[ch]++;
    }

    // set count to size of mp so that we don't traverse to
    // mp after after every increment and decrement
    int count = mp.size();
    int i = 0, j = 0, res = 0;

    // sliding window
    while (j < txt.size())
    {
        if (mp.find(txt[j]) != mp.end())
        {
            mp[txt[j]]--;
            if (mp[txt[j]] == 0)
                count--;
        }
        if (j - i + 1 == ptrn.size())
        {
            // check before increment
            if (count == 0)
                res++;
            if (mp.find(txt[i]) != mp.end())
            {
                mp[txt[i]]++;
                if (mp[txt[i]] == 1)
                    count++;
            }
            i++;
        }
        j++;
    }
    return res;
}
int main()
{

    return 0;
}