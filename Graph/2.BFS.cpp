#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int n,vector<int>adj[])
{
    
    int vis[n]={0};
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }

    }
    return bfs;
}
int main(){
     
return 0;
}