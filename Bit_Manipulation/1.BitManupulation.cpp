#include<bits/stdc++.h>
using namespace std;

vector<int> bitManipulation(int n, int i) {
  // Write your code here.
  i = i - 1;//As one base indexing 
  int ans = n & (1 << i);
  if (ans == 0) {
    ans = 0;
  } else {
    ans = 1;
  }
  int ans1 = n | (1 << i);
  int ans2 = n & ~(1 << i);
  vector<int> x;
  x.push_back(ans);
  x.push_back(ans1);
  x.push_back(ans2);
  return x;
}

int main(){
     
return 0;
}