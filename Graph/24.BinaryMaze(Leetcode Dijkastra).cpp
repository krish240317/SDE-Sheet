#include <bits/stdc++.h>
using namespace std;
int main()
{
    class Solution
    {
    public:
        int shortestPathBinaryMatrix(vector<vector<int>> &matrix)
        {

            if (matrix[0][0] == 0 && matrix.size() == 1)
                return 1;
            int r = matrix.size();
            int c = matrix[0].size();
            pair<int, int> src{0, 0};
            pair<int, int> dest{r - 1, c - 1};
            //  if(src.first==dest.first && src.second==dest.second && matrix[src.first][src.second]==0) return 0;
            //  if(src.first==dest.first && src.second==dest.second && matrix[src.first][src.second]==1) return -1;
            if (matrix[src.first][src.second] == 1 || matrix[dest.first][dest.second] == 1)
                return -1;
            queue<pair<int, int>> q;
            vector<vector<int>> dist(r, vector<int>(c, INT_MAX));
            dist[src.first][src.second] = 1;

            q.push({src.first, src.second});
            int value;
            while (!q.empty())
            {

                int c1 = q.front().first;
                int c2 = q.front().second;
                int cost;
                q.pop();
                for (int i = -1; i <= 1; i++)
                {
                    for (int j = -1; j <= 1; j++)
                    {

                        int row = c1 + i;
                        int col = c2 + j;
                        if (row >= 0 && row < r && col >= 0 && col < c)
                        {
                            if (matrix[row][col] == 0 && (1 + dist[c1][c2]) < dist[row][col])
                            {
                                dist[row][col] = 1 + dist[c1][c2];
                                q.push({row, col});
                            }
                        }
                        if (row == dest.first && col == dest.second)
                        {
                            return dist[row][col];
                        }
                    }
                }
            }
            return -1;
        }
    };
    return 0;
}