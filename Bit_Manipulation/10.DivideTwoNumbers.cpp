#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend==divisor) return 1;
        bool sign=true;//+ve
        if(dividend>=0 && divisor<0) sign=false;
        if(dividend<=0 && divisor>0) sign=false;

        //take absolut
        long n=abs(dividend);
        long d=abs(divisor);
        long ans=0;
        while(n>=d)
        {
            int count =0;
            while(n>=(d<<count+1))//d*2^count+1;
            {
                count++;
            }
             //sotre no of 3
                ans+=(1<<count);//2^count
                n=n-(d<<count);
        }

        if(ans==(1<<31) && sign==true) return INT_MAX;
        if(ans==(1<<31) && sign==false) return INT_MIN;
        
        if(sign==true)
        return ans;
        else
        return -1*ans;

    }
};
int main(){
     
return 0;
}