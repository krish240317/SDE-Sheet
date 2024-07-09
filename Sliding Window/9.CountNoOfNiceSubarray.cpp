#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subsum(vector<int> &arr, int k)
    {
        if (k < 0)
            return 0;

        int l = 0, r = 0, sum = 0;
        int count = 0;
        int n = arr.size();
        while (r < n)
        {
            sum += arr[r] % 2;
            while (sum > k)
            {
                sum -= arr[l] % 2;
                l++;
            }

            count = count + (r - l + 1);

            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return subsum(nums, k) - subsum(nums, k - 1);
    }
};
int main()
{

    return 0;
}