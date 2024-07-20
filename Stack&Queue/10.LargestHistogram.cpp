#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestRectangleArea(vector<int> &arr)
    {
        int n = arr.size();
        stack<int> st;
        int maxArea = 0;

        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || arr[st.top()] >= arr[i]))
            {
                // we know previous  smaller (we will get it after we pop one ele )
                // we know next smaller(i) because of this condition  arr[st.top()]>arr[i]
                // so
                int height = arr[st.top()];
                int width;
                st.pop();
                // as we pop we know st.top will be previous smaller
                if (st.empty())
                {
                    width = i;
                }
                else
                {
                    width = i - st.top() - 1; // next-previous-1;
                }
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};
int main()
{

    return 0;
}