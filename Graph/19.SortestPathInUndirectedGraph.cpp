#include<bits/stdc++.h>
using namespace std;
  vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<vector<int>> adj(N);
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> dist(N,1e9);
        queue<int> q;
        dist[src]=0;
        q.push(src);
        while(!q.empty())
        {
            int node =q.front();
            q.pop();
            for(auto it : adj[node]) {
                //if distance is less than previous then update 
                if(dist[node] + 1 < dist[it]) {
                    dist[it] = 1 + dist[node]; 
                    q.push(it); 
                }
            }
        }
        vector<int> ans(N, -1);
        for(int i = 0;i<N;i++) {
            if(dist[i] != 1e9) {
                ans[i] = dist[i]; 
            }
        }
        return ans; 
        
    }
int main(){
     
return 0;
}