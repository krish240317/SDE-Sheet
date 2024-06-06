#include<bits/stdc++.h>
using namespace std;
int search()
{
    int n=arr.size();
    int m=arr[0].size();
    int low=0;
    int high=(n*m)-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int row=mid/m,col=mid%m;
        if(arr[row][col]==target) return 1;
        if(arr[row][col]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return 0;
}
int main(){
     
return 0;
}