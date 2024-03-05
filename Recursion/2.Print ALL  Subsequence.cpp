#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(vector<int> &ds, int indx, int arr[], int n)
{
    if (indx == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
//take
    ds.push_back(arr[indx]);
    fun(ds,indx+1,arr,n);
    ds.pop_back();
    //not take
    fun(ds,indx+1,arr,n);
}
int main()
{
    vector<int> ds;
    int n = 3;
    int arr[3] = {3,1,2};
   fun(ds, 0, arr, n);

   
    return 0;
}