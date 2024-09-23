#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int findh(vector<int> &arr, int mid)
    {
        long long int ans = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            ans += ceil((double)(arr[i]) / (double)(mid));
        }
        return ans;
    }
    int minEatingSpeed(vector<int> &arr, int h)
    {

        // range 1 to 11
        long long int low = 1;
        int n = arr.size();
        int high = 0;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            high = max(arr[i], high);
        }
        while (low <= high)
        {
            long long int mid = (low + high) / 2;
            long long int nhr = findh(arr, mid);
            if (nhr > h)
            {
                // not possible
                low = mid + 1;
            }
            else
            {
                // possible
                ans = mid;
                high = mid - 1;
                // find lowest
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}