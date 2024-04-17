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

   // also check for last bloomed flower in arr as it get not add up as adding of bookey is in eklse part
   nbookey+=(count/k);
   if(nbookey>=m) return true;
   return false;

}
    int minDays(vector<int>& arr, int m, int k) {
        int n =arr.size();
       long long val = m * 1ll * k * 1ll;//???????????/////////////
        if(val>n) return -1;
        int mini =INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(arr[i],mini);
            maxi = max(arr[i],maxi);
        }
        int low=mini;
        int high =maxi;
        int  r=INT_MAX;
        while(low<=high)
        {
            int mid= (high+low)/2;
            if(possible(arr,mid,m,k))
            {
                r=min(r,mid);
                high =mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return r;

    }
};
int main(){
     
return 0;
}