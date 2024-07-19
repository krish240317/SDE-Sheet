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
        // if reach end ; i.e-i==n
        // then next smaller==n & previous smaller will be st.top()
        // if st.empty then previous will be -1;
        //  while(!st.empty())
        //  {
        //      int i=n;
        //      int width;
        //      int height=arr[i];
        //      st.pop();
        //      if(st.empty())
        //      {
        //          width=-1;
        //      }
        //      else
        //      {
        //          width=i-st.top()-1;
        //      }
        //       maxArea=max(maxArea,height*width);
        //  }
        return maxArea;
    }
};
int main()
{

    return 0;
}