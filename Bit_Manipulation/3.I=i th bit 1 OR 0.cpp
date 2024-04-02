#include<bits/stdc++.h>
using namespace std;
bool isKthBitSet(int n, int k)
{
    // Write your code here
     k=k-1;
    int set = n&(1<<k);
    if(set==0)
    {
        return false;
    }
    else{
        return true;
    }

}
int main(){
     
return 0;
}