#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &heights)
    {
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        // distance,row,col
        pq.push({0, {0, 0}});
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        while (!pq.empty())
        {
            auto top = pq.top();
            int distance = top.first;
            int row = top.second.first;
            int col = top.second.second;

            pq.pop();
            if (row == n - 1 && col == m - 1)
                return distance;
            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
                {
                    int effort = max(abs(heights[row][col] - heights[nrow][ncol]), distance);
                    if (effort < dist[nrow][ncol])
                    {
                        dist[nrow][ncol] = effort;
                        pq.push({effort, {nrow, ncol}});
                    }
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