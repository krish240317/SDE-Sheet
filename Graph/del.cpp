#include<bits/stdc++.h>
using namespace std;
//NOTE
//Now the question is updated ,we also have to pushback the weight of shortest path.

typedef pair<int,int> pip;
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector< pair<int,int> >adj[n+1];
        for(auto &it : edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue< pip, vector<pip> , greater< pip > >pq;
        pq.push({0,1});
        vector<int>dist(n+1,1e9);
        dist[1] = 0;
        vector<int>parent(n+1);
        for(int i = 1;i<=n;i++) parent[i] = i;
        
        while(pq.size() > 0)
        {
            auto it = pq.top();
            int node = it.second;
            int dis = it.first;
            pq.pop();
            
            for(auto &it : adj[node])
            {
                int adjnode = it.first;
                int edgeweight = it.second;
                if(dis + edgeweight < dist[adjnode])
                {
                    dist[adjnode] = dis + edgeweight;
                    pq.push({dis+edgeweight , adjnode});
                    parent[adjnode] = node;
                }
            }
        }
        if(dist[n] == 1e9) return {-1};
        vector<int>path;
        int node = n;
        while(parent[node] != node)
        {
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        path.push_back(dist[n]);
        reverse(path.begin(),path.end());
        return path;
    }
int main(){
     
return 0;
}