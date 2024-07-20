#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &arr)
    {
        int n = arr.size();
        int leftmax = 0;
        int rightmax = 0;
        long long total = 0;
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            if (arr[l] <= arr[r])
            {
                // left is smaller and there is someone greter on right
                //move smaller first
                if (leftmax > arr[l])
                {
                    total += leftmax - arr[l];
                }
                else
                {
                    // new leftmax
                    leftmax = arr[l];
                }
                l++;
            }
            else
            {
                if (rightmax > arr[r])
                {
                    total += rightmax - arr[r];
                }
                else
                {
                    rightmax = arr[r];
                }
                r--;
            }
        }
        return total;
    }
};
int main()
{

    return 0;
}