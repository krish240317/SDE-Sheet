#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &arr)
    {

        // find the dip
        // iterate from back to it till finds
        int n = arr.size();
        int ind = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                ind = i;
                break;
            }
        }
        if (ind == -1)
        {
            reverse(arr.begin(), arr.end());
            return;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[ind] < arr[i])
            {
                swap(arr[i], arr[ind]);
                break;
            }
        }
        reverse(arr.begin() + ind + 1, arr.end());
    }
};
int main()
{

    return 0;
}