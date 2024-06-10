#include<bits/stdc++.h>
using namespace std;

int findMinLength(int n, vector<string> &strs)
{
	int minLen = strs[0].length();

	for (int i = 1; i < n; i++)
		if (strs[i].length() < minLen)
			minLen = strs[i].length();

	return minLen;
}
// A Function that returns the longest common prefix from the vector of strings
string longestCommonPrefix(int n, vector<string>& strs) {

	// if vector of strings is empty, return empty string
	if (n == 0)
		return "";
	string ans = "";		// our answer string
	int minLen = findMinLength(n, strs);

	for (int i = 0; i < minLen; i++)
	{
		// Current character (must be same in all strings to be a part of result)
		char ch = strs[0][i];
		for (int j = 0; j < n; j++)
		{
			if (ch != strs[j][i])
				return ans;
		}
		// Append the current character in our answer string
		ans.push_back(ch);
	}
	return ans;
}
int main(){
     
return 0;
}