#include<bits/stdc++.h>
using namespace std;


int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
  // Write your code here.
  sort(arr.begin(), arr.end());
  int last = INT_MIN;
  int count = 0;
  int longest = 1;
  for (int i = 0; i < n; i++) {
       
       
    if (arr[i] - 1 == last) {
      count = count + 1;
      last = arr[i];
    }
    if (arr[i] != last) {
      count = 1;
      last = arr[i];
    }
    longest = max(longest, count);
  }
  return longest;
}
int main(){
     
return 0;
}