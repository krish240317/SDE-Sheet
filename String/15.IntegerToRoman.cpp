#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<int> v(13);
         v[0]=1000;
         v[1]=900;
         v[2]=500;
         v[3]=400;
         v[4]=100;
         v[5]=90;
         v[6]=50;
         v[7]=40;
         v[8]=10;
         v[9]=9;
         v[10]=5;
         v[11]=4;
         v[12]=1;
         vector<string> r(13);
          r[0]="M";
         r[1]="CM";
         r[2]="D";
         r[3]="CD";
         r[4]="C";
         r[5]="XC";
         r[6]="L";
         r[7]="XL";
         r[8]="X";
         r[9]="IX";
         r[10]="V";
         r[11]="IV";
         r[12]="I";

         string ans ="";
         int i=0;
         while(num>0)
         {
            while(num>=v[i]){
                num-=v[i];
                ans+=r[i];
            }
            i++;
         }
         return ans;
    }
};
int main(){
     
return 0;
}