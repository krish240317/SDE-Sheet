#include<bits/stdc++.h>
using namespace std;
//Brute force

 int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxi=INT_MIN;
        if(nums[0]==-1 && nums.size()==1) return -1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
             if(maxi<sum)
            {
                maxi=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
           
        }
        if(maxi<0) return maxi;
       return maxi;
    }
int main(){
     
return 0;
}