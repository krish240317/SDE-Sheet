#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int histogram(vector<int> &histo)
    {
        stack<int> st;
        int maxA = 0;
        int n = histo.size();
        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || histo[st.top()] >= histo[i]))
            {
                int height = histo[st.top()];
                st.pop();
                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                maxA = max(maxA, width * height);
            }
            st.push(i);
        }
        return maxA;
    }

    int maximalRectangle(vector<vector<char>> &matrix)
    {
        // same as largest histrogram
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> prefixsum(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += 1;
                if (matrix[i][j] - '0' == 0)
                    sum = 0;
                prefixsum[i][j] = sum;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            // on each row apply histrogram
            ans = max(ans, histogram(prefixsum[i]));
        }
        return ans;
    }
};
int main()
{

    return 0;
}