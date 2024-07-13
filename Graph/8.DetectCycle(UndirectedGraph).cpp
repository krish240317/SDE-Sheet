#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

bool bfs(int start, int parent, vector<vector<int>> &edges, vector<vector<int>> &adj, queue<pair<int, int>> &q, vector<int> &vis)
{
    vis[start] = 1;
    q.push({start, parent});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, node});
            }
            else if (parent != it)//visited but not a parent 
            {
                return true;
            }
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector<int> vis(n + 1, 0);
    queue<pair<int, int>> q;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (bfs(i, -1, edges, adj, q, vis))
            {
                return "Yes";
            }
        }
    }
    return "No";
}
int main()
{

    return 0;
}