#include<bits/stdc++.h>
using namespace std;
// int missingNumber(int n, vector<int> &nums) {
//   // Write your code here.
//   sort(nums.begin(), nums.end());
//   // int n=nums.size();
//   int ans = 0, x = 0;
//   int i = 0;
//   while (i < n - 1) {
//     ans = nums[i] ^ nums[i + 1];
//     if (ans != 0) {
   
//       x = nums[i];
//       return x;
//     }
//     i = i + 2;
//     return nums[n - 1];
//   }
class Solution {
public:

//Method 1 is By Map

//Method 2 XOR in XOR Order does not matter;
    int singleNumber(vector<int>& nums) {
        
     int n=nums.size();
     int xorr=0;
     for(int i=0;i<n;i++)
     {
        xorr=xorr^nums[i];
     }   
     return xorr;
    }
};

  

int main(){
     
return 0;
}