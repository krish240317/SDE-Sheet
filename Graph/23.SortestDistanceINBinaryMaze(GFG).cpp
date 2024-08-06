#include <bits/stdc++.h>
using namespace std;
int shortestPath(vector<vector<int>> &grid, pair<int, int> src,
                 pair<int, int> destination)
{
    // code here
    int n = grid.size();
    int m = grid[0].size();
    if (src.first == destination.first && src.second == destination.second)
        return 0;
    queue<pair<int, pair<int, int>>> q;
    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    dist[src.first][src.second] = 0;
    q.push({0, {src.first, src.second}});
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    while (!q.empty())
    {
        auto top = q.front();//difference is we are taking front not top in pq we take top so we get minimum
                             //here our front is minimum as all are stored in soreted as +1 everytime to distance 
        int row = top.second.first;
        int col = top.second.second;
        int distance = top.first;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && distance + 1 < dist[nrow][ncol])
            {
                dist[nrow][ncol] = distance + 1;
                if (nrow == destination.first && ncol == destination.second)
                    return dist[nrow][ncol];
                q.push({dist[nrow][ncol], {nrow, ncol}});
            }
        }
    }
    return -1;
}
int main()
{

    return 0;
}