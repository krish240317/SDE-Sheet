#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &vis)
    {

        int n = grid.size();
        int m = grid[0].size();

        vis[row][col] = 1;

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1)
            {
                dfs(nrow, ncol, grid, vis);
            }
        }
    }
    int noisland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int island = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j, grid, vis);
                    island++;
                }
            }
        }
        return island;
    }
    int minDays(vector<vector<int>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        // dfs for count no of islands
        int ans = noisland(grid);
        if (ans > 1 || ans == 0)
            return 0;

        // checking for greater than 1 island
        // ans can be 1 or 2 max ;
        //
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    grid[i][j] = 0;
                    int island = noisland(grid);
                    grid[i][j] = 1;
                    if (island > 1 || island == 0)
                    {
                        return 1;
                    }
                }
            }
        }
        return 2;
    }
};
int main()
{

    return 0;
}