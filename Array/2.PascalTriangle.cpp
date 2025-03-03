#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//If row and col is given

// int pascalTriangle(int N,int r) {
//     // Write your code here.
  
//         int res=1;
//         for (int i = 0; i < r; i++)
//         {
//             res=res*(N-i);
//             res=res/(i+1);

//         }

//         return res;
// }
//optimise solution
//TO print a single line given n
int pst(int n)
{
    int ans=1;
    cout<<ans<<" ";
    for (int  i = 1; i < n; i++)
    {
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
    cout<<endl;
    
}
int main(){
     
return 0;
}