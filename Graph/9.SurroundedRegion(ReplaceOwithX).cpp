#include <bits/stdc++.h>
using namespace std;

////******************DFS*****************////////
class Solution
{
public:
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    void dfs(vector<vector<char>> &board, int row, int col, vector<vector<int>> &vis)
    {
        int n = board.size();
        int m = board[0].size();
        vis[row][col] = 1;
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == 'O')
            {
                vis[nrow][ncol] = 1;
                dfs(board, nrow, ncol, vis);
            }
        }
    }
    void solve(vector<vector<char>> &board)
    {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                {
                    if (board[i][j] == 'O')
                    {
                        dfs(board, i, j, vis);
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};

void replaceOWithX(char **grid, int n, int m)
{
    // Write your code here
    queue<pair<int, int>> q;

    // int vis[n][m] = {0};
    vector<vector<int>> vis(n, vector<int>(m, 0));
    // traverse boundary elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // first row, first col, last row, last col
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                // if it is a land then store it in queue
                if (grid[i][j] == 'O')
                {
                    q.push({i, j});
                    vis[i][j] = 1;
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
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 'O')
            {
                q.push({nrow, ncol});
                vis[nrow][ncol] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == 'O')
            {
                grid[i][j] = 'X';
            }
        }
    }
}
int main()
{

    return 0;
}