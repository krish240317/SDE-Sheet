#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reqday(vector<int> &arr, int cap)
    {
        int n = arr.size();
        int days = 1;
        int load = 0;
        for (int i = 0; i < n; i++)
        {
            if (load + arr[i] > cap)
            {
                days = days + 1;
                load = arr[i];
            }
            else
            {
                load += arr[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int> &arr, int days)
    {
        // we know the range
        // max element to sum of all
        int n = arr.size();
        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(arr[i], maxi);
            sum += arr[i];
        }
        int low = maxi;
        int high = sum;
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int rdays = reqday(arr, mid);
            if (rdays <= days)
            {
                // possible answere
                ans = min(ans, rdays);
                high = mid - 1;
            }
            else
            {
                // not possible
                low = mid + 1;
            }
        }
        return low;
    }
};
int main()
{

    return 0;
}