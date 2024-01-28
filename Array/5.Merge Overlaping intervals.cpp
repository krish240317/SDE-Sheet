#include<bits/stdc++.h>
using namespace std;
#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	vector<vector<int>> ans;
	int n =arr.size();
	sort(arr.begin(),arr.end());

	for(int i= 0;i< n; i++)
	{
		if(ans.empty() || arr[i][0] > ans.back()[1])
		{
			ans.push_back(arr[i]);
		}
		else if(arr[i][0]<=ans.back()[1])
		{
			ans.back()[1] = max(arr[i][1],ans.back()[1]);
		//	ans.back()[1]=arr[i][1]; wrong on output 12 13 16 34
		}
	}
	return ans;
	
	
}
int main(){
     
return 0;
}