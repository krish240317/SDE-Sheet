#include<bits/stdc++.h>
using namespace std;

int findx(int n)
{
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}
int findXOR(int L, int R){
    // Write your code here.
    // int xorr=L;
    // while(L!=R)
    // {
    //      L=L+1;
    //     xorr=xorr^L;
    // }
    // return xorr;

    //Better Way
  int ans=findx(L-1)^findx(R);
  return ans;
}
int main(){
     
return 0;
}