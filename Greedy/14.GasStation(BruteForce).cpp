#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        for (int i = 0; i < n; i++)
        {
            if (gas[i] < cost[i])
            {
                // not possible to move from current index
                continue;
            }
            // int costfromitoj=cost[i];
            // int gaseatnext=gas[j];
            int j = (i + 1) % n;
            int currentgas = gas[i] - cost[i] + gas[j];
            // traverse to all other gas station
            while (j != i)
            {
                if (currentgas < cost[j])
                    break;

                int costfromj = cost[j];
                j = (j + 1) % n;
                currentgas = currentgas - costfromj + gas[j]; // current-cost+gasearn
            }
            if (i == j)
                return i;
        }
        return -1;
    }
};

int main()
{

    return 0;
}