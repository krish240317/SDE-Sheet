#include<bits/stdc++.h>
using namespace std;

int ninjaTraining(int n, vector<vector<int>>& points) {
    vector<vector<int>> dp(n, vector<int>(4, 0));

//for day zero (Base Case when day==0 find max)
dp[0][0] = max(points[0][1], points[0][2]);
  dp[0][1] = max(points[0][0], points[0][2]);
  dp[0][2] = max(points[0][0], points[0][1]);
  dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

  //we have to fill the dp array
  // simple iterate on day 
  //iterate in all 4 tasks

  //then same logic that was in recursion 
  for (int day = 0; day < n; day++)
  {
    for (int last = 0; last < 4; last++)
    {
        dp[day][last]=0;
        for (int i = 0; i < 3; i++)
    {
        if (i != last)
        {
            int total = points[day][i] + dp[day-1][i];
            dp[day][last] = max(total, dp[day][last]);
        }
    }
    }
    
  }
  

}
int main(){
     
return 0;
}