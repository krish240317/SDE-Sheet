#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    // Write Your Code Here
    int sum = 0;
    int count = 0;
    int n = arr.size();
    map<int, int> m;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        //preffixsum
        sum += arr[i];
        //if before sum-k exsist
        int remove = sum - k;
        count += m[remove];
        //map of sum = 1;
        m[sum] = m[sum] + 1;
    }
    return count;
}
int main()
{

    return 0;
}