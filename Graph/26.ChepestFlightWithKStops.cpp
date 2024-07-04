#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<pair<int, int>> adj[n];
        for (auto it : flights)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }
        queue<pair<int, pair<int, int>>> q;
        vector<int> dist(n, 1e9);
        // stops,node,cost/weight
        q.push({0, {src, 0}});
        while (!q.empty())
        {
            auto top = q.front();
            int stops = top.first;
            int node = top.second.first;
            int cost = top.second.second; // cost till now from src
            q.pop();
            if (stops > k)
                continue;
            for (auto it : adj[node])
            {
                int v = it.first;
                int weight = it.second;
                if (weight + cost < dist[v] && stops <= k)
                {
                    //<=k because cwe can push max with k stops so here it become k+1 (3)
                    dist[v] = weight + cost;
                    q.push({stops + 1, {v, dist[v]}});
                }
            }
        }
        if (dist[dst] == 1e9)
            return -1;

        return dist[dst];
    }
};
int main()
{

    return 0;
}