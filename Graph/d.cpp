#include<bits/stdc++.h>
using namespace std;
bool dfsfind(int node,vector<int> adj[],vector<int> &vis,vector<int> &pathvis)
{
  vis[node]=1;
  pathvis[node]=1;
  for(auto it: adj[node])
  {
    if(!vis[it])
    {
      if(dfsfind(it,adj,vis,pathvis)==true)
      {
        return true ;
      }
    }
    else if(pathvis[it])
    {
      return true ;
    }
  }
  pathvis[node]=0;
  return false ;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  vector<int> adj[n];
  for(auto it: edges)
  {
    int u=it.first;
    int v=it.second;
    adj[u].push_back(v);
  }
  vector<int> pathvis(n);
  vector<int> vis(n);
  for(int i=0;i<n;i++)
  {
    if(!vis[i])
    {
      if(dfsfind(i,adj,vis,pathvis)==true)
      {
        return true;
      }
    }
  }
  return false ;
  
} 
int main(){
return 0;
}