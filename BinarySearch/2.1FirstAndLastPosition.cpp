#include<bits/stdc++.h>
using namespace std;
// #include<bits/stdc++.h>
//Using Lower Bound Upper Bound
int lowerbound(vector<int> &nums, int target) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] >= target) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}
int upperbound(vector<int> &nums, int target) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] > target) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &nums, int n, int target) {
  // Write your code here
  int x = lowerbound(nums, target);
  int y = upperbound(nums, target);
  // int p=nums[x];
  if (nums[x]!=target||x == n) {

    return {-1, -1};
  } else {
    return {x, y - 1};
  }
}

int main(){
     
return 0;
}