#include <bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"
double minimiseMaxDistance(vector<int> &arr, int k)
{
    // Write your code here.
    int n = arr.size();
    vector<int> howmany(n - 1, 0);
    // push all section and its section index in priority queue
    priority_queue<pair<long double, int>> pq;
    for (int i = 0; i < n - 1; i++)
    {
        pq.push({(arr[i + 1] - arr[i]), i});
    }
    //iterate till no of gasstation to add 
    for (int gasstation = 1; gasstation <= k; gasstation++)
    {
        auto tp = pq.top();
        pq.pop();
        int secind = tp.second;
        howmany[secind]++;
        long double initialdiff = arr[secind + 1] - arr[secind];//here to do tp.first is wrong  
        long double newsectionlength = initialdiff / (long double)(howmany[secind] + 1);
        pq.push({newsectionlength, secind});
    }

    return pq.top().first;
}

int main()
{

    return 0;
}