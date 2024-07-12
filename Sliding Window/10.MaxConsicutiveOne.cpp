#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &arr)
    {
        int l = 0;
        int n = arr.size();
        int r = 0;
        int maxlen = 0;
        while (r < n)
        {
            if (arr[r] != 1)
            {

                l = r + 1;
            }
            if (arr[r] == 1)
            {
                maxlen = max(r - l + 1, maxlen);
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