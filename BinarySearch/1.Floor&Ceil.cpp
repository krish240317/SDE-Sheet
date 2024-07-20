#include<bits/stdc++.h>
using namespace std;

int ceil(vector<int> &arr, int n, int x)
{
	int ans=-1;
	int low =0;
	int high=n-1;
	while(low<=high)
	{
		//Lower bound arr[i]>=x(least index)
		int mid =(low+high)/2;
		if(arr[mid]>=x)
		{
			ans=arr[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
		}

		
	}
	return ans;
}
int floor(vector<int> &arr, int n, int x)
{
	int ans=-1;
	int low =0;
	int high=n-1;
	while(low<=high)
	{
		//Lower bound arr[i]>=x(least index)
		int mid =(low+high)/2;
		if(arr[mid]<=x) 
		{
			ans=arr[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}

		
	}
	return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int p=ceil(a,n,x);
	int y=floor(a, n, x);
	return {y,p};
}