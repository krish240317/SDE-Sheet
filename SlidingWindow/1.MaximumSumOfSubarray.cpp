#include<bits/stdc++.h>
using namespace std;
 long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
    int i=0;
	int j=0;
	long sum=0;
	long maxi=0;
	while(j<n)
	{
		sum+=arr[j];
		if((j-i)+1<k)
		{
			j++;
		}
		else if((j-i)+1==k)
		{
			maxi=max(maxi,sum);
			sum-=arr[i];
			i++;
			j++;
		}
	}
	return maxi;
    }
int main(){
     
return 0;
}