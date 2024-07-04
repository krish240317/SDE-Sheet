#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPaths(int n, vector<vector<int>> &roads)
    {
        vector<pair<long long, long long>> adj[n];
        int mod = (int)(1e9 + 7);
        for (auto it : roads)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        vector<long long> dist(n, 1e18);
        vector<long long> ways(n, 0);

        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        dist[0] = 0;
        ways[0] = 1;
        // dist , node
        pq.push({0, 0});
        while (!pq.empty())
        {
            long long distance = pq.top().first;
            long long node = pq.top().second;
            pq.pop();

            for (auto it : adj[node])
            {
                long long v = it.first;
                long long wt = it.second;
                if (distance + wt < dist[v])
                {
                    dist[v] = distance + wt;
                    pq.push({dist[v], v});
                    ways[v] = ways[node];
                }
                else if (distance + wt == dist[v])
                {
                    ways[v] += ways[node] % mod;
                }
            }
        }
        return ways[n - 1] % mod;
    }
};
int main()
{

    return 0;
}