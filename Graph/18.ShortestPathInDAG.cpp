#include <bits/stdc++.h>
using namespace std;
//{ Driver Code Starts
// Initial Template for C++


// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    void dfs(int start, vector<pair<int, int>> adj[], vector<int> &vis, stack<int> &s)
    {
        vis[start] = 1;

        for (auto it : adj[start])
        {
            int v = it.first;
            if (!vis[v])
            {
                dfs(v, adj, vis, s);
            }
        }
        s.push(start);
    }
    vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
    {
        // code here
        vector<pair<int, int>> adj[N];
        for (int i = 0; i < M; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v, wt});
        }
        vector<int> vis(N, 0);
        stack<int> st;
        for (int i = 0; i < N; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis, st);
            }
        }
        // initiise distance array
        vector<int> dis(N, 1e9);

        dis[0] = 0;
        while (!st.empty())
        {
            int node = st.top();
            st.pop();
            for (auto it : adj[node])
            {
                int v = it.first;
                int wt = it.second;
                if (dis[node] + wt < dis[v])
                {
                    dis[v] = wt + dis[node];
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (dis[i] == 1e9)
                dis[i] = -1;
        }
        //we are returning shortest distance from a source node (0); ie. shortest distance from 0 to every node 
        return dis;
    }
};

//{ Driver Code Starts.


// } Driver Code Ends
int main()
{

    return 0;
}