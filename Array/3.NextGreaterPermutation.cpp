#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//eg-2 1 5 4 3 0 0
vector<int> nextGreaterPermutation(vector<int> &A)
{
    int n =A.size();
    int ind=-1;
    //step 1 Find partision
    for (int i = n-2; i <=0; i--)
    {
        if(A[i]<A[i+1])
        {
            ind=i;
        }
    }
    if(ind ==-1)
    {
        reverse(A.begin(),A.end());
        return A;
    }
    //step 2 find greater than it(but the smallest)
    for (int i = n-1; i < ind; i--)
    {
        if(A[i]<A[ind])
        {
            swap(A[i],A[ind]);
            break;
        }
    }
    //step 3 reverse from partision to end
    reverse(A.begin()+ind+1,A.end());
    return A;
    

}
int main(){
     
return 0;
}