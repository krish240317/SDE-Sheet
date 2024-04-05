#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int dup=x;
        long reverse =0;
        int last;
        while(x>0)
        {
            last=x%10;
            reverse=(reverse*10) +last;//tp store reverse number 9->90+8=98
            x=x/10;
        }
        
        if(reverse==dup) return true;
        return false;

    }
};
int main(){
     
return 0;
}