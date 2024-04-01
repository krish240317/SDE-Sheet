#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    int maxi=INT_MIN;
    vector<int> ans;
    for(int i=n-1; i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
     
return 0;
}