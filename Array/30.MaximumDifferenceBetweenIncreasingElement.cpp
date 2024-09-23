#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumDifference(vector<int> &arr)
    {

        int maxi = -1;
        // int n=0;
        int i = 0;
        int j = 1;
        int n = arr.size();
        while (i < n && j < n)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j] - arr[i];
                maxi = max(maxi, temp);
                j++;
            }
            else
            {
                i = j;
                j++;
            }
        }
        return maxi;
    }
};

int main()
{

    return 0;
}