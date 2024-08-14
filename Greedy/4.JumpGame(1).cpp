#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &arr)
    {
        int maxindex = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (i > maxindex)
                return false;
                //we can jump  max till i+arr[i] index thats why i+arr[i] 
            maxindex = max(maxindex, i + arr[i]);
        }
        return true;
    }
};
int main()
{

    return 0;
}