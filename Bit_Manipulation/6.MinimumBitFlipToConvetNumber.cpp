#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countOne(int n)
    {
        int count = 0;
        if (n == 1)
            return 1;
        while (n > 1)
        {
            count += n & 1;
            n = n >> 1;//n=n/2;
            if (n == 1)
                count += 1;
        }
        return count;
    }
    int minBitFlips(int start, int goal)
    {
        int ans = start ^ goal;
        int r = countOne(ans);
        return r;
    }
};
int main()
{

    return 0;
}