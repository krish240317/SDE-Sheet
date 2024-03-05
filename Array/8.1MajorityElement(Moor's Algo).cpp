#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moors Algo
        int n=nums.size();
        int count =0;
        int find=0;
        for(int i=0;i<n;i++)
        {
            if(count ==0)
            {
                count =1;
                find=nums[i];
                
            }
            else if(nums[i]==find)
            {
                count ++;
            }
            else
            {
                count --;
            }
        }
        //now we got our element which can be greter than n/2
        //verify -Only do  when there is not give majority element always exsist;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==find)
             count1 ++;
        }
        int ans=-1;
        if(count1 > n/2) 
        {
            ans= find;
        }
        return ans;
    }
};
int main(){
     
return 0;
}