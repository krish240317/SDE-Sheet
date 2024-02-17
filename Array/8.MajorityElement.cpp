#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int maxi=0;
      int mans=0;
        for(auto it:m)
        {
            if(it.second>n/2)
            {
                 mans= it.first;
            }
            
        }
      
        // for(auto it:m)
        // {
        //     if(it.second==maxi)
        //     {
               
        //         break;
        //     }
        // }
        return mans;
    }
};
int main(){
     
return 0;
}