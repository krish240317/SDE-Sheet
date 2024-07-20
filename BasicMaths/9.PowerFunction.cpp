#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double myPow(double x, int n)
    {
        //x^n;
        double ans = 1;
        long long y = n;
        // if -ve Make it +ve
        if (y < 0)
            y = -1 * y;
        while (y != 0)
        {
            if (y % 2 == 1)
            {
                ans = ans * x;
                y = y - 1;
            }
            else
            {
                x = x * x;
                y = y / 2;
            }
        }
        if (n < 0)
            ans = 1 / ans;
        return ans;
    }
};
int main()
{

    return 0;
}