#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> dq;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            //pop from front if window excides then k 
            while (!dq.empty() && dq.front() == i - k)
            {
                dq.pop_front();
            }
            //pop from back when greter arr[i]
            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);

            //i>=k-1 for from that our window starts 
            if (i >= k - 1)
            {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}