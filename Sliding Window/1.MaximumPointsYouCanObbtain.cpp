#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxScore(vector<int> &arr, int k)
    {
        int leftsum = 0, rightsum = 0, maxsum = 0;
        int n = arr.size();
        // find initial sum left sum
        for (int i = 0; i < k; i++)
        {
            leftsum += arr[i];
        }
        // all k elements from left
        maxsum = leftsum;
        int rightindex = n - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            // minus from left
            leftsum -= arr[i];
            // add right
            rightsum += arr[rightindex];
            rightindex--;//move right index
            maxsum = max(maxsum, leftsum + rightsum);
        }
        return maxsum;
    }
};
int main()
{

    return 0;
}