#include<bits/stdc++.h>
using namespace std;
double powerfun(double x,int n)
{

 double ans=1;
    long long dumn=n;
    if(dumn<0) dumn =-1*dumn;
    while(dumn)
    {
        if(dumn%2==0)
        {
            x=x*x;
            dumn=dumn/2;
        }
        else{
            ans=ans*x;
            dumn=dumn-1;
        }
    }
    if(n<0) ans=double(1)/double(ans);
    return ans;
}

int main(){
     
return 0;
}