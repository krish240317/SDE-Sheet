#include <bits/stdc++.h>
using namespace std;
// #include <bits/stdc++.h>

//Dijkastra always involves source to destination path
vector<int> dijkstra(vector<vector<int>> &vec, int n, int e, int src)
{
    // Write your code here.
    vector<vector<int>> adj[n];
    for (int i = 0; i < e; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int wt = vec[i][2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n, INT_MAX);
    // pushing {dist,node}
    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty())
    {
        auto top = pq.top();
        int distance = top.first;
        int node = top.second;
        pq.pop();

        for (auto it : adj[node])
        {
            int v = it[0];
            int wt = it[1];

            if (dist[node] + wt < dist[v])
            {
                dist[v] = dist[node] + wt;
                //pushing updated distance and  node in pq;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main()
{

    return 0;
}