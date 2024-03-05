#include<bits/stdc++.h>
using namespace std;


int LongestSubsetWithZeroSum(vector<int> arr) {

  // Write your code here
  int n = arr.size();
  unordered_map<int, int> m;
  int maxi = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (sum == 0) {
      // sum is zero from first element
      maxi = i + 1;
    } 
    else if (m.find(sum) != m.end()) {

      // we find sum in preffix sum
      maxi = max(maxi, i - m[sum]);

    }
     else {
      // didnt find sum
      m[sum] = i;
    }
  }
  return maxi;
}


int main(){
     
return 0;
}