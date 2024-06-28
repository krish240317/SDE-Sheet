#include <bits/stdc++.h>
using namespace std;
// #include "bits/stdc++.h"
vector<int> toposort(int V, vector<vector<int>> &adj)
{
    int indegree[V] = {0};
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> topo;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        // node is in your topo sort
        // so please remove it from the indegree

        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }

    return topo;
}

string getAlienLanguage(vector<string> &dict, int k)
{
    // Write your code here.
    vector<vector<int>> adj(k);
    int n = dict.size();
    // vector<int>adj[k];
    for (int i = 0; i < n - 1; i++)
    {
        string s1 = dict[i];
        string s2 = dict[i + 1];
        int len = min(s1.size(), s2.size());
        for (int j = 0; j < len; j++)
        {
            if (s1[j] != s2[j])
            {
                adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                break;
            }
        }
    }
    vector<int> topo = toposort(k, adj);
    string ans = "";
    for (auto it : topo)
    {
        ans = ans + char(it + 'a');
    }
    return ans;
}
int main()
{

    return 0;
}