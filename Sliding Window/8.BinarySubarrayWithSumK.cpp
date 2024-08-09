#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // code for subarray sum<=k
    int subsum(vector<int> &arr, int k)
    {
        if (k < 0)
            return 0;

        int l = 0, r = 0, sum = 0;
        int count = 0;
        int n = arr.size();
        while (r < n)
        {
            sum += arr[r];
            while (sum > k)
            {
                sum -= arr[l];
                l++;
            }
            //counting  individual  subarray and all other possibles also  
            count = count + (r - l + 1);

            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {

        // return count(nums, goal) - count(nums, goal - 1);
        return subsum(nums, goal) - subsum(nums, goal - 1);
        // return ans;
    }
};
int main()
{

    return 0;
}