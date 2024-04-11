#include <bits/stdc++.h>
using namespace std;
int calcGCD(int a, int b)
{
    // Write your code here.
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
        return b;
    return a;
}
int main()
{

    return 0;
}