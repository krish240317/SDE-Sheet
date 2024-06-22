#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[], int vis[])
{
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis);
        }
        
    }
}
int pro(vector<vector<int>> mat,int n)
{
    //TO Convert adjecent matrix to adjecent list
    vector<int> adj[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j]==1 && i!=j)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
        
    }
    int vis[n]={0};
    
    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
        {
            count++; 
            dfs(i,adj,vis);
        }
    }
    return count;


}
int main(){

return 0;
}