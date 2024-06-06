#include<bits/stdc++.h>
using namespace std;
// int countOne(int n)
// {
//     int count=0;
//     if (n==1) return 1;
//     while(n>1)
//     {
//          count+=n&1;
//          n=n>>1;
//         if(n==1) count+=1;

//     }
//     return count;
// }
int countOne(int n)
{
    int count=0;
    if (n==1) return 1;
   while(n != 0)
   {
       n=n&(n-1);
       //it counts number of set bits in n
       count++;
   }
    return count;
}
int countSetBits(int N)
{
    int ans=0;
    //Write your code here
    for(int i=1;i<=N;i++)
    {
         ans+=countOne(i);
    }
    return ans;
}
int main(){
     
return 0;
}