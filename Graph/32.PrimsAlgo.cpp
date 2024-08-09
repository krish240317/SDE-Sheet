#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
{
    // code here
    vector<int> vis(V, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    //({weight,node})
    int sum = 0;
    pq.push({0, 0});
    while (!pq.empty())
    {
        int wt = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // mark vis now as pushing in MST
        if (vis[node] == 1)
            continue;
        vis[node] = 1;
        sum += wt;

        //if we want to print MST edges 
        // ans.push _back({parent,node});

        for (auto it : adj[node])
        {
            int adjnode = it[0];
            int egw = it[1];
            //push in queue its adj nodes with weight
            if (!vis[adjnode])
            {
                pq.push({egw, adjnode});
            }
        }
    }
    return sum;
}

int main()
{

    return 0;
}