#include <bits/stdc++.h>
using namespace std;
double minimiseMaxDistance(vector<int> &arr, int k)
{
    // Write your code here.
    int n = arr.size();
    vector<int> howmany(n - 1, 0);
    for (int gasstation = 1; gasstation <= k; gasstation++)
    {
        long double maxsection = -1; // tracks which section has max disstance
        int maxindex = -1;
        for (int i = 0; i < n - 1; i++)
        {
            long double diff = (arr[i + 1] - arr[i]);
            long double sectionlength = diff / (long double)(howmany[i] + 1);
            if (sectionlength > maxsection)
            {
                maxsection = sectionlength;
                maxindex = i;
            }
        }
        howmany[maxindex]++;
    }
    long double maxans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        long double diff = (arr[i + 1] - arr[i]);
        long double sectionlength = diff / (long double)(howmany[i] + 1);
        maxans = max(maxans, sectionlength);
    }
    return maxans;
}

int main()
{

    return 0;
}