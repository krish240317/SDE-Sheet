#include <bits/stdc++.h>
using namespace std;
vector<int> bellman_ford(int n, vector<vector<int>> &edges, int src)
{
    // Code here
    vector<int> dist(n, 1e8);
    dist[src] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            // relaxitation
            if (dist[u] != 1e8 && dist[u] + wt < dist[v])
            {
                dist[v] = dist[u] + wt;
            }
        }
    }
    // one more relaxation for check negative cycle
    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        // relaxitation
        if (dist[u] != 1e8 && dist[u] + wt < dist[v])
        {
            return {-1};
        }
    }
    return dist;
}
int main()
{

    return 0;
}