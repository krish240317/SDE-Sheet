#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
//same as  KOKO
    bool check(vector<int> &arr, int d, int t)
    {
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += ceil(double(arr[i]) / double(d));
        }
        if (ans > t)
            return false;
        return true;
    }
    int smallestDivisor(vector<int> &nums, int t)
    {
        int n = nums.size();
        int maxi = INT_MIN;
        if (n > t)
            return -1;
        for (int i = 0; i < n; i++)
        {
            maxi = max(nums[i], maxi);
        }
        int low = 1;
        int high = maxi;
        int ans = INT_MAX;
        while (low <= high)
        {

            int mid = (low + high) / 2;
            if (check(nums, mid, t))
            {
                //possible and we need smaller so..
                ans = min(ans, mid);
                high = mid - 1;
            }
            else
            {
               // if i am not possible my left also not possible 
                low = mid + 1; // delete left half
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}