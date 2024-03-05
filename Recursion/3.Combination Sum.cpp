#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void fun(int ind,vector<int> &ds,vector<int> &arr,int target,vector<vector<int>> &ans)
{
    if(ind==arr.size())
    {
       if( target==0)
       {
        ans.push_back(ds);
        
       }
       return;
        
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        fun(ind,ds,arr,target-arr[ind],ans);
        ds.pop_back();
    }
    fun(ind+1,ds,arr,target,ans);

    
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
     vector<int> ds;
     fun(0,ds,arr,target,ans);
      return ans;
    }
};
int main(){
     
return 0;
}