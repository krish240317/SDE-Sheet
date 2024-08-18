#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
int firstCircularTour(vector<int> &gas, vector<int> &cost, int n)
{
    // Write your code here.
    // int n=gas.size();
    long totalgas = 0;
    long result = 0;
    long totalcost = 0;
    for (int i = 0; i < n; i++)
    {
        totalgas += gas[i];
        totalcost += cost[i];
    }
    if (totalgas < totalcost)
        return -1;
    // now we know that ans exsist
    long total = 0;
    // cput<<"HI";
    for (int i = 0; i < n; i++)
    {
        total += gas[i] - cost[i];
        if (total < 0)
        {
            total = 0;
            result = i + 1;
        }
    }
    return result;
}

int main()
{

    return 0;
}