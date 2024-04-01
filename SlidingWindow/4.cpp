#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
     vector<int> ans;
     list<int> q;
     int i=0;
     int j=0;
     int n =arr.size();
     while(j<n)
     {
         //calculation 
         //push ele in queue and also check 
         if(q.empty())
         {
             q.push_back(arr[j]);
         }
         else if(!q.empty() &&q.back()<arr[j])
         {
             while(!q.empty() &&q.back()<arr[j])
             {
                 q.pop_back();
             }
             q.push_back(arr[j]);
             
         }
        else if(!q.empty() &&q.back()>arr[j])
         {
             q.push_back(arr[j]);
         }

         if(j-i+1==k)
         {
             //found window
             ans.push_back(q.front());
             //remove calculations
             if(arr[i]==q.front())
             {
                 q.pop_front();
             }
             i++;
         }
         j++;
     }
     return ans;  
    }
};
int main(){
     
return 0;
}