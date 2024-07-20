#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int i)
{
    int n=arr.size();
    if(i>=n/2)
    {
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1);
}
int main(){
    vector<int> arr;
     reverse(arr,0);
return 0;
}
