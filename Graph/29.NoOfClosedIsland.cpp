#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void bfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &vis, int n, int m)
    {
        queue<pair<int, int>> q;
        vis[i][j] = 1;
        q.push({i, j});
        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            int delrow[] = {-1, 0, 1, 0};
            int delcol[] = {0, 1, 0, -1};
            for (int i = 0; i < 4; i++)
            {

                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 0)
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dup(n, vector<int>(m));
        dup = grid;
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // first row, first col, last row, last col
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    // if it is a land then store it in queue
                    if (grid[i][j] == 0)
                    {
                        q.push({i, j});
                        dup[i][j] = 1;
                    }
                }
            }
        }

        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, +0, -1};

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // traverses all 4 directions
            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                // check for valid coordinates and for land cell
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && dup[nrow][ncol] == 0 && grid[nrow][ncol] == 0)
                {
                    q.push({nrow, ncol});
                    dup[nrow][ncol] = 1;
                }
            }
        }

        // Write your code here
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && dup[i][j] == 0)
                {
                    count++;
                    bfs(i, j, dup, vis, n, m);
                }
            }
        }
        return count;
    }
};
int main()
{

    return 0;
}