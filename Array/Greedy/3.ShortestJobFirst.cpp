#include <bits/stdc++.h>
using namespace std;
long long solve(vector<int> &arr)
{
    // code here

    int n = arr.size();
    sort(arr.begin(), arr.end());
    float wtime = 0;
    int totaltime = 0;
    for (int i = 0; i < n; i++)
    {
        wtime += totaltime;
        totaltime += arr[i];
    }
    return wtime / n;
}
int main()
{

    return 0;
}