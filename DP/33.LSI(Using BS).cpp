#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> temp;
        temp.push_back(arr[0]);
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > temp.back())
            {
                // continue increase subsequence
                temp.push_back(arr[i]);
                count++;
            }
            else
            {
                // found lowerbound of temp of i and replace it
                int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
                temp[ind] = arr[i];
            }
        }
        return count;
    }
};

int main()
{

    return 0;
}