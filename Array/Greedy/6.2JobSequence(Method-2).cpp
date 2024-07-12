#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a,vector<int> b)
    {
        return a[2]>b[2];
    }
vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    
    sort(jobs.begin(),jobs.end(),cmp);

   int maxi;
   for(int i=0;i<n;i++)
   {
       maxi=max(maxi,jobs[i][1]);
   }
   int count=0;
   int profit=0;
    vector<int> hash(maxi+1,-1);
    for(int i=0;i<n;i++)
    {
        for(int j=jobs[i][1];j>0;j--)
        {
            if(hash[j]==-1)
            {
                hash[j]=i;
                count++;
                profit+=jobs[i][2];
                break;
            }
        }
    }
    return{count,profit};

   // return {};

}

int main(){
     int n;
     cin>>n;
     vector<vector<int>> v;
     for(int i=0;i<n;i++)
     {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back({x,y,z});
     }
     jobScheduling(v);
return 0;
}