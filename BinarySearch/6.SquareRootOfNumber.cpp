#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int n)
{
    // Write your code here.
    int ans = 0;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= n)
        {
            ans = mid;
            //it can be answer but,,,,,
            // anything on left now can not be my ans as we want maximum 
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}