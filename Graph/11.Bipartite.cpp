#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkk(int start, int V, vector<vector<int>> &adj, int colour[])
    {

        queue<int> q;
        q.push(start);

        colour[start] = 0;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto it : adj[node])
            {
                if (colour[it] == -1)
                {
                    q.push(it);
                    colour[it] = !colour[node];
                }
                else if (colour[node] == colour[it])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>> &adj)
    {
        // Code here
        int V = adj.size();
        int colour[V];
        for (int i = 0; i < V; i++)
        {
            colour[i] = -1;
        }
        for (int i = 0; i < V; i++)
        {
            if (colour[i] == -1)
            {
                if (checkk(i, V, adj, colour) == false)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}