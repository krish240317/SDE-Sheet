#include <bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"
int calculateMinPatforms(int arr[], int dt[], int n)
{
    // Write your code here.
    sort(arr, arr + n);
    sort(dt, dt + n);
    int i = 0;
    int j = 0;
    int count = 0;
    int maxcount = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dt[j])
        {
            count++;
            i++;
        }
        else
        {
            // reduce platform bcz tis train  gone in old platform so now reduce platforn
            count--;
            j++;
        }
        maxcount = max(maxcount, count);
    }
    return maxcount;
}
int main()
{

    return 0;
}