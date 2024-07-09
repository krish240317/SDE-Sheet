#include <bits/stdc++.h>
using namespace std;
int totalFruits(int n, vector<int> &arr)
{

    int r = 0, l = 0, maxlen = 0;
    map<int, int> m;
    while (r < n)
    {
        m[arr[r]]++;
        if (m.size() <= 2)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        //if we use while here then its O(2N) solution;
        if (m.size() > 2)
        {
            m[arr[l]]--;
            if (m[arr[l]] == 0)
            {
                m.erase(arr[l]);
            }
            l++;
        }
        r++;
    }
    return maxlen;
}
int main()
{

    return 0;
}