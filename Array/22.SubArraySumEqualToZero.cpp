#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubarray(int arr[], int n)
{
    // Write your code here
    unordered_map<int, int> m;//to reduce time complexity
    int maxlen = 0;
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0)//check for firt elements gives zero(fromt starting index subarray exsist with sum 0)
        {
            maxlen = i + 1;
        }
        else if (m.find(sum) != m.end())
        {
            maxlen = max(maxlen, i - m[sum]);
        }
        else
        {
            m[sum] = i;
        }
    }
    return maxlen;
}
int main()
{

    return 0;
}