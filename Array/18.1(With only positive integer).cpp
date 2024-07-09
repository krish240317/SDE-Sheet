#include <bits/stdc++.h>
using namespace std;
// concept of sliding window;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here

    int n = a.size(); // size of the array.

    int i = 0, j = 0; // 2 pointers
    long long sum = 0;
    int maxLen = 0;
    while (j < n)
    {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        sum += a[j];
        while (i <= j && sum > k)
        {
            sum -= a[i];
            i++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k)
        {
            maxLen = max(maxLen, j - i + 1);
        }

        // Move forward thw right pointer:
        j++;
    }

    return maxLen;
}
int main()
{

    return 0;
}