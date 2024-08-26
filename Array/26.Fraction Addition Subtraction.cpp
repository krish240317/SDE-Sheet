#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string fractionAddition(string arr)
    {
        // travers on string
        // initially num=0 & deno=1;
        int num = 0;
        int deno = 1;
        int n = arr.length();
        int i = 0;
        while (i < n)
        {
            int currentnum = 0;
            int currentdeno = 0;
            bool isneg = (arr[i] == '-');
            if (arr[i] == '-' || arr[i] == '+')
            {
                // if symbol then continue
                i++;
            }
            // building numerator
            while (i < n && isdigit(arr[i]))
            {
                int val = arr[i] - '0';
                currentnum = (currentnum * 10) + val;
                i++;
            }
            i++; // for skiping the divide symbol after builting numerator
            if (isneg == true)
            {
                currentnum *= -1;
            }
            // building denomerator
            while (i < n && isdigit(arr[i]))
            {
                int val = arr[i] - '0';
                currentdeno = (currentdeno * 10) + val;
                i++;
            }

            // after getting all current numand deno and past num and deno
            num = num * currentdeno + currentnum * deno;
            deno = deno * currentdeno;
        }
        // take GCD before returning
        int GCD = abs(__gcd(num, deno)); // 3

        num /= GCD;  //-1
        deno /= GCD; // 2
        // after completing this  while we will have our num and deno
        return to_string(num) + '/' + to_string(deno);
    }
};
int main()
{

    return 0;
}