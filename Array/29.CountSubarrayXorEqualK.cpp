#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int sum = 0;
    int count = 0;
    int n = arr.size();
    map<int, int> m;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
        // preffixxor
        sum ^= arr[i];

        int remove = sum ^ x;
        count += m[remove];
        // map of sum = 1;
        m[sum] = m[sum] + 1;
    }
    return count;
}
int main()
{

    return 0;
}