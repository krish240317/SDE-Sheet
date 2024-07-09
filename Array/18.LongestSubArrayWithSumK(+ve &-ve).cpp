#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &arr, int k)
{
    // Write your code here
    int n = arr.size();
    map<long long, int> prefixsum;
    int sum = 0;
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if (prefixsum.find(rem) != prefixsum.end())
        {
            // found a sub array update length
            int len = i - prefixsum[rem];
            maxlen = max(len, maxlen);
        }
        if (prefixsum.find(sum) == prefixsum.end())
        {
            prefixsum[sum] = i;
        }
    }
    return maxlen;
}
int main()
{

    return 0;
}