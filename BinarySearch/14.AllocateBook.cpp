#include<bits/stdc++.h>
using namespace std;

int check(vector<int>& arr,int pages,int students)
{
    int n=arr.size();
    int countstudent=1;
    int pagecount=0;
    for(int i=0;i<n;i++)
    {
        if(pagecount+arr[i]<=pages)
        {
            pagecount+=arr[i];
        }
        else
        {
            countstudent++;
            pagecount=arr[i];
        }
    }
    return countstudent;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(arr[i],maxi);
        sum+=arr[i];
    }
    int low=maxi;
    int high =sum;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int nstudent=check(arr,mid,m);
        if(nstudent<=m)
        {
            //right eleminate
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;

}
int main(){
     
return 0;
}