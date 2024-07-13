#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int jump(vector<int> &arr)
    {
        // It's guaranteed that you can reach nums[n - 1].
        int n = arr.size();
        int l = 0;
        int r = 0; //..go farthest
        int jump = 0;
        while (r < n - 1)
        {
            int farthest = 0;
            for (int i = l; i <= r; i++)
            {
                farthest = max(farthest, i + arr[i]);
            }
            l = r + 1;
            r = farthest;
            jump++;
        }
        return jump;
    }
};
int main()
{

    return 0;
}