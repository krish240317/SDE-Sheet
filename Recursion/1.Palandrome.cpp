#include<iostream>
using namespace std;
bool solve(int i ,string s,int n)
{
    if(s[i]!=s[n-i-1])
    return false;
    if(i>=n/2)
    return true;

    swap(s[i],s[n-1-i]);
    return solve(i+1,s,n);
}
int main(){
    string s;
    cin>>s;
     
    if(solve(0,s,s.size()))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
return 0;
}