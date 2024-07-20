#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
vector<vector<int>> grid(n,vector<int>(m,0));

vector<vector<int>> vis(n,vector<int>(m,0));
queue<pair<int,pair<int,int>>> q;
int count=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        grid[i][j]=x;
        if(grid[i][j]==2)
        {
            q.push({0,{i,j}});
        }
          if(grid[i][j]==1)
        {
            count++;
        }
    }
}
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         if(grid[i][j]==2)
//         {
//             q.push({0,{i,j}});
//         }
//     }
// }
int drow[] = {-1, 0, 1, 0};
int dcol[] = {0, 1, 0, -1};
int tn=0;
while(!q.empty())
{
            int r = q.front().second.first;
            int c = q.front().second.second;
            int t = q.front().first;
            tn = max(tn, t);
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && !vis[nrow][ncol])
                {
                    vis[nrow][ncol] = 2;
                    q.push({t+1,{nrow,ncol}});
                   // count--;
                }
            }
          
        
}
cout<<tn<<endl;
// else{
//     cout<<" NOT POSSIBLE "<<endl;
// }
return 0;
}