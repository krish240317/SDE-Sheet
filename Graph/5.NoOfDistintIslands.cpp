#include<bits/stdc++.h>
using namespace std;


void bfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis,int n,int m)
{
    queue<pair<int,int>> q;
    vis[i][j]=1;
    q.push({i,j});
    while(!q.empty())
    {
       int row=q.front().first;
       int col=q.front().second;
       q.pop();
       for(int i=-1;i<=1;i++)
       {
           for(int j=-1;j<=1;j++)
           {
               int nrow=row+i;
               int ncol=col+j;
               if(nrow>=0 && nrow<n &&ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
               {
                   vis[nrow][ncol]=1;
                   q.push({nrow,ncol});
               }
           }
       }

    }
}
int numberOfIslands(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here
    vector<vector<int>> vis(n,vector<int>(m,0));
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && grid[i][j]==1)
            {
                count++;
                bfs(i,j,grid,vis,n,m);
            }
        }
    }
    return count;
}
int main(){
     
return 0;
}