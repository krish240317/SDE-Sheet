#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == target)
                return mid;
            // check soterted part
            if (arr[low] <= arr[mid])
            {
                // left sorted
                // check if target exsist
                if (arr[low] <= target && target <= arr[mid])
                {
                    // then target exsist in left half
                    // eleminate right half
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if (arr[mid] <= target && target <= arr[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main()
{

    return 0;
}