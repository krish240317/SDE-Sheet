#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> m;
        int n= nums.size();
       for(int i=0;i<n;i++)
       {
           int value =target - nums[i];
           if(m.find(value) != m.end())
           {
               return {m[value],i};
           }
            m[nums[i]]=i;
       }
      return {-1,-1};
    }
};
int main(){
     
return 0;
}