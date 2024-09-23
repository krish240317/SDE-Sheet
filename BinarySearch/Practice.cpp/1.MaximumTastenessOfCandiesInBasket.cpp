#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int mid, vector<int> &arr, int k)
    {
        int n = arr.size();
        int count = 1;
        int last = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - last < mid)
            {
                continue;
            }
            else
            {
                // pick if greater then or equal to mid
                count++;
                last = arr[i];
            }
        }
        if (count >= k)
            return true;
        return false;
    }
    int maximumTastiness(vector<int> &arr, int k)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0;
        int low = 0;
        int high = arr[n - 1];
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (check(mid, arr, k))
            {
                ans = max(mid, ans);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}