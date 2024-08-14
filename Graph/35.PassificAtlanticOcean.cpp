#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};

    void dfs(vector<vector<int>> &arr, vector<vector<int>> &vis, int row, int col)
    {
        int n = arr.size();
        int m = arr[0].size();
        vis[row][col] = 1;
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && arr[nrow][ncol] >= arr[row][col] && !vis[nrow][ncol])
            {
                dfs(arr, vis, nrow, ncol);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &arr)
    {
        vector<vector<int>> ans;
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> p(n, vector<int>(m)); // passific
        vector<vector<int>> a(n, vector<int>(m)); // attlantic
        for (int i = 0; i < n; i++)
        {
            // i changing in both
            // dfs on left column
            dfs(arr, p, i, 0);
            // dfs for right column
            dfs(arr, a, i, m - 1);
        }
        for (int i = 0; i < m; i++)
        {
            dfs(arr, p, 0, i);
            dfs(arr, a, n - 1, i);
        }
        //      for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         // first row, first col, last row, last col
        //         if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
        //         {
        //             // if it is a land then store it in queue
        //            dfs(arr,p,i,j);
        //            dfs(arr,a,i,j);
        //         }
        //     }
        // }

        for (int i = 0; i < n; i++)
        {
            // iterate each column
            for (int j = 0; j < m; j++)
            {
                // if both P[i][j] & A[i][j] are visited
                // that means this cell can flow to both ocean
                if (p[i][j] && a[i][j])
                {
                    // then put the coordinate (i, j) to answer
                    ans.push_back(vector<int>{i, j});
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}