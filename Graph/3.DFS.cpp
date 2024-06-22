#include <bits/stdc++.h>
using namespace std;
void dfss(int node, vector<int> adj[], int vis[], vector<int> dfs)
{
    vis[node] = 1;
    dfs.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfss(it, adj, vis, dfs);
        }
    }
}
    vector<int> dfs(int n, vector<int> adj[])
    {
        int vis[n] = {0};
        vector<int> dfs;
        int start = 0;
        dfss(start, adj, vis, dfs);
        return dfs;
    }
    int main()
    {

        return 0;
    }