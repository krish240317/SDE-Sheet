#include <bits/stdc++.h>
using namespace std;

/// @ Brute Force
class Solution
{
public:
    int m = 1e9 + 7;
    int sumSubarrayMins(vector<int> &arr)
    {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int mini = arr[i];
            for (int j = i; j < n; j++)
            {
                mini = min(arr[j], mini);
                sum = (sum + mini) % m;
            }
        }
        return sum;
    }
};
int main()
{

    return 0;
}