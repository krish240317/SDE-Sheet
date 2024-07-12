#include<bits/stdc++.h>
using namespace std;
void jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    auto cmp=[](vector<int> a,vector<int> b)
    {
        return a[2]>b[2];
    };
    sort(jobs.begin(),jobs.end(),cmp);

    for(auto i:jobs)
    cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;

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