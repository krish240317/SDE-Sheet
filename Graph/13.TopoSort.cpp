#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

void dfs(int start, vector<vector<int>> &adj, int vis[], stack<int> &s)
{
    vis[start] = 1;

    for (auto it : adj[start])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, s);
        }
    }
    s.push(start);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // Write your code here
    vector<vector<int>> adj(v + 1);
    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        // adj[edges[i][1]].push_back(edges[i][0]);
    }

    stack<int> st;
    int vis[v] = {0};
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj, vis, st);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main()
{

    return 0;
}