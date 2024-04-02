#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int N)
    {
        if (N <= 0)
            return false;
        if ((N & (N - 1)) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    return 0;
}