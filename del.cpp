#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
long long mod=1000000007;
    vector<int> getFinalState(vector<int>& arr, int k, int x) {
        
        int n=arr.size();
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        for(int i=0;i<n;i++)
        {
            pq.push({arr[i],i});
        }
        for(int i=0;i<k;i++)
        {
            long long ele=pq.top().first;
            int  ind=pq.top().second;
            pq.pop();
            long long  ans= (ele*x)%mod;
            pq.push({ans,ind});
        }
        vector<int> result(n);
        while(!pq.empty())
        {
            long long ele=pq.top().first;
            int ind=pq.top().second;
             pq.pop();
            result[ind]=(ele%mod);
           
        }
        return result ;
    }
};

int main(){
     
return 0;
}