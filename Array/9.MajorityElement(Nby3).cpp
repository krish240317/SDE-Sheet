#include<bits/stdc++.h>
using namespace std;

//Without Map


//Using extraspace map
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans1;
//            map<int,int> m;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             m[nums[i]]++;
//         }
//         int maxi=0;
//       int mans=0;
//         for(auto it:m)
//         {
//             if(it.second>n/3)
//             {
//                  ans1.push_back(it.first);
//             }
            
//         }
//         return ans1;
//     }
// };
int main(){
     string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << *ptr << "\n";

return 0;
}