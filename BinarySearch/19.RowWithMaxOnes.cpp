#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> arr,int n,int x)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &mat, int n, int m)
{
    //    Write your code here.
     int maxi=0;
       int index=-1;
      
       for(int i=0;i<n;i++)
       {
        int countone=m-lowerbound(mat[i],m,1);
        if(countone>maxi)
        {
            maxi=countone;
            index=i;
        }
       } 
       return index;
}
int main(){
     
return 0;
}