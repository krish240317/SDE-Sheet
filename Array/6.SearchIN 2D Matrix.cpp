#include<bits/stdc++.h>
using namespace std;


//Simple 2pointer aproach
bool searchMatrix(vector<vector<int>>& arr, int B)
{
    int n=arr.size();
    int m=arr[0].size();
    int i=0;
    int j=m-1;
    while(j>0 && i<=n )
    {
        if(arr[i][j]==B) return true;
         if(arr[i][j]<B)
        {
            i++;
        }
        else{
            j--;
        }

    }
    return false;

}
int main(){
     
return 0;
}