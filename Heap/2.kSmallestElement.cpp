#include<bits/stdc++.h>
using namespace std;


int kthSmallest(int n,int k,vector<int> arr)
{
    // Write your code here.
    priority_queue<int> pq;
    //maxheap
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    return pq.top();
} 

int main(){
     
return 0;
}