#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &image, vector<vector<int>> &copy, int initialcolor, int newcolor, int delrow[], int delcol[])
{
    copy[row][col] = newcolor;
    int n = image.size();
    int m = image[0].size();
    // to traverse in 4 direction using dfs
    for (int i = 0; i < 4; i++)
    {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && copy[nrow][ncol] != newcolor && image[nrow][ncol] == initialcolor)
        {
            dfs(nrow, ncol, image, copy, initialcolor, newcolor, delrow, delcol);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    vector<vector<int>> copy = image;
    int initialcolor = image[x][y];
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    dfs(x, y, image, copy, initialcolor, newColor, delrow, delcol);
    return copy;
}
int main()
{

    return 0;
}