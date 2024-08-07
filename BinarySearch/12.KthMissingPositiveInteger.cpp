#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n =arr.size();
        int low=0;
        int high =n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int missing= arr[mid]-(mid+1);//we find out missing number at this place 
            if(missing<k)
            {
                low=mid+1;
            }
            else
            {
                high =mid-1;
            }
        }
        return low+k; 
    }
};
int main(){
     
return 0;
}