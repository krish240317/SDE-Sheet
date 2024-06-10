#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int ans=INT_MAX;
        int low=0;
        int high=n-1;
        int mid;
        if(n==1) return arr[0];
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[low]<=arr[mid])
            {
                if(ans>arr[low])
                {
                   ans = min(arr[low],ans);
                }
                low=mid+1;
            }
            else
            {
                 if(ans>arr[mid])
                {
                    ans = min(arr[mid],ans);
                }
               high =mid-1;
            }
        }
        return ans;
    }
};
int main(){
     
return 0;
}