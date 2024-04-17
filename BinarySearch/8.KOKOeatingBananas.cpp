#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int counthr(vector<int> &v, int hourly)
    {
        int totalH = 0;
        int n = v.size();
        // find total hours:
        for (int i = 0; i < n; i++)
        {
            totalH += ceil((double)(v[i]) / (double)(hourly)); // important to do double
        }
        return totalH;
    }

    int minEatingSpeed(vector<int> &arr, int h)
    {
        int n = arr.size();
        int ans = INT_MAX;
        int low = 1;
        // find max
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(arr[i], maxi);
        }
        int high = maxi;
        int mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            int reqtime = counthr(arr, mid);

            if (reqtime <= h)
            {
                //it can be answer
                // eleminate right half 
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}