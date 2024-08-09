#include<bits/stdc++.h>
using namespace std;
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  
  bool dfscheck(int node,vector<int> adj[],int vis[],int pathvis[]){
  vis[node]=1;
  pathvis[node]=1;

  for(auto it:adj[node])
  {
    if(!vis[it])
    {
      //it will get true only when someone return true 
      if(dfscheck(it,adj,vis,pathvis)==true)
      {
        return true;
      }
    }
     else if (pathvis[it]) {
      //visited and pathvisited also 
      // if only pathvisited return true there is a cycle 
        return true;
      }
  }
  //unmarking pathvisited on backtracking 
  pathvis[node]=0;
  return false;//if not get in else if block 
}
    // Function to detect cycle in a directed graph.
    bool isCyclic(int n, vector<int> adj[]) {
        // code here
        int vis[n]={0};
  int pathvis[n]={0};
  // vector<int> pathvis(n,0);
  for(int i=0;i<n;i++)
  {
    if(!vis[i])
    {
      if(dfscheck(i,adj,vis,pathvis)==true)
      {
        return 1;
      }
    }
  }
  
  return 0;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
int main(){
     
return 0;
}