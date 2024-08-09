#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
private:
    // defining 2 arrays
    vector<int> parent, rank;

public:
    // initialise constructor
    DisjointSet(int n)
    {
        // parent and rank size declaring
        rank.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i < n; i++)
        {
            // intitaliseing parent to parent itself
            parent[i] = i;
        }
    }
    // finding ultimate parent
    int findUparent(int node)
    {
        if (node == parent[node])
            return node;

        // define all to its ultimte parent
        return parent[node] = findUparent(parent[node]);
    }
    void UnionByRank(int u, int v)
    {
        int ulp_u = findUparent(u);
        int ulp_v = findUparent(v);
        // if parent are equal we dont have to do anything
        if (ulp_u == ulp_v)
            return;

        // now if not equal than connect smaller rank to higher
        if (rank[ulp_u] < rank[ulp_v])
        {
            // smaller ulp_u gets attach to higher ulp_v
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            // smaller me parent aata he
            parent[ulp_v] = ulp_u;
        }
        else
        {
            // both rank equal
            // can assign anyone to parent and increase the rank
            parent[ulp_v] = ulp_u;
            // rank of higher increase (not heigher by value i consider hogher )
            rank[ulp_u]++;
        }
    }
};
int main()
{

    DisjointSet ds(7);
    ds.UnionByRank(1, 2);
    ds.UnionByRank(2, 3);
    ds.UnionByRank(4, 5);
    ds.UnionByRank(6, 7);
    ds.UnionByRank(5, 6);
    // if 3 and 7 same or not
    if (ds.findUparent(3) == ds.findUparent(7))
    {
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    ds.UnionByRank(3, 7);

    if (ds.findUparent(3) == ds.findUparent(7))
    {
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    return 0;
}