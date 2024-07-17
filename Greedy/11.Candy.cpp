#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &arr)
    {
        int n = arr.size();
        long long sum = 1;
        int i = 1;
        while (i < n)
        {
            // flate slop all ones
            if (arr[i] == arr[i - 1])
            {
                sum += 1;
                i++;
                continue;
            }
            int peak = 1;
            while (i < n && arr[i] > arr[i - 1])
            {
                peak += 1; // peak initiall 1 added now for next element
                sum += peak;
                i++;
            }
            int down = 1;
            while (i < n && arr[i] < arr[i - 1])
            {
                // down+=1;
                sum += down;
                i++;
                down++;
            }
            if (down > peak)
            {
                sum += (down - peak);
            }
        }
        return sum;
    }
};
int main()
{

    return 0;
}