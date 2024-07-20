#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {

        bool sign = true;
        if (x < 0)
            sign = false;
        long a = (1 << 31);
        a = abs(a);

        x = abs(x);

        long reverse = 0;
        int last;
        while (x > 0)
        {
            last = x % 10;//we get last digit in number 
            reverse = (reverse * 10) + last;
            x = x / 10;
        }
        if (reverse > a && sign == false || reverse > a - 1 && sign == true)
            return 0;
        if (sign == false)
        {
            return -reverse;
        }
        return reverse;
    }
};
int main()
{

    return 0;
}