#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTheCity(int n, vector<vector<int>> &edges, int k)
    {

        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        // filling distance vector from edges;
        for (auto it : edges)
        {
            dist[it[0]][it[1]] = it[2];
            dist[it[1]][it[0]] = it[2];
        }
        for (int i = 0; i < n; i++)
            dist[i][i] = 0;
        // applt floysd warshall
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    //OK to not right this 
                    // if (dist[i][k] == 1e9 || dist[k][j] == 1e9)
                    //     continue;
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        // after we get minimum
        int countcity = n; // for finding no of city less than threshold
        int cityno = -1;   // our answere
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                // traversing whole row for 0 and counting citys with threshold
                if (dist[i][j] <= k)
                {
                    count++;
                }
            }
            // checking count is less than previous
            if (count <= countcity)
            {
                countcity = count;
                cityno = i;
            }
        }
        return cityno;
    }
};
int main()
{

    return 0;
}