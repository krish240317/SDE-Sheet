

// void subsum(int  i ,vector<int> &num,vector<int> &ans,int sum)
// {
// 	int n=num.size();
// 	if(i==n)
// 	{
// 		ans.push_back(sum);
// 		return;
// 	}

// 	//take
// 	subsum(i+1,num,ans,sum+num[i]);

// 	//not take
// 	subsum(i+1,num,ans,sum);

// }
// vector<int> subsetSum(vector<int> &num){
// 	// Write your code here.	
// 	vector<int> ans;
// 	int sum=0;
// 	subsum(0,num,ans,sum);
// 	sort(ans.begin(),ans.end());
// 	return ans;
// }