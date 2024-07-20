#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool possible(vector<int> &arr,int day,int m,int k)
{
    int n=arr.size();
    int nbookey=0;
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=day)
        {
            count ++;
        }
        else
        {
            nbookey+=(count/k);
            count=0;
        }
    }

   // also check for last bloomed flower in arr as it get not add up as adding of bookey is in else part
   nbookey+=(count/k);
   if(nbookey>=m) return true;//possible
   return false;

}
    int minDays(vector<int>& arr, int m, int k) {
        int n =arr.size();
        int ans=-1;
        if(m*k>n) return ans;
        int mini =INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(arr[i],mini);
            maxi = max(arr[i],maxi);
        }
        for(int i=mini;i<=maxi;i++)
        {
            if(possible(arr,i,m,k)==true)
            {
                ans=i;
               return i;
            }
        }
        return -1;

    }
};
int main(){
     
return 0;
}