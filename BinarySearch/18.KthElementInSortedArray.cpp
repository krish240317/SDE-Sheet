#include <bits/stdc++.h>
using namespace std;

//similar to median of sorted array just changes is  low is set to max of k-n2 and 0 as if k is greater 
//then there should be minimum n and k as it shows how many you can pick from the arr1  

int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k)
{
    // Write your code here
    // similar to median of two sorted array

    int total = n + m;
    int low = max(k - m, 0);
    int high = min(n, k);
    int left = k;
    while (low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;

        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;

        if (mid1 < n)
            r1 = arr1[mid1];
        if (mid2 < m)
            r2 = arr2[mid2];
        if (mid1 - 1 >= 0)
            l1 = arr1[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = arr2[mid2 - 1];
        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }
        else if (l1 > r2)
        {
            high = mid1 - 1;
        }
        else
        {
            low = mid1 + 1;
        }
    }
    return 0;
}
int main()
{

    return 0;
}