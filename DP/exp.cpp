#include<bits/stdc++.h>
using namespace std;


void fun(vector<int> &arr,int i,int n)
{
    
    if(i>n/2) return ;
   //return fun(n-1,ans);
   swap(arr[i],arr[n-i-1]);
   return fun(arr,i+1,n);
}

int main(){
    // int n=5;
    vector<int> arr;
     arr={1,2,3,4,5};
    // int n=arr.length();
//    cout<< fun(arr); /
fun(arr,0,arr.size());
for(auto i:arr)
{
    cout<<i<<" "<<endl;
}
return 0;
}