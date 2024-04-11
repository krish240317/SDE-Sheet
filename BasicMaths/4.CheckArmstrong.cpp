#include <bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n)
{
    // Write your code here
    string digits = to_string(n);
    int digitcount = digits.size();
    int num = n;
    int r = 0;
    int pal = 0;
    while (n > 0)
    {
        r = n % 10;
        pal = pow(r, digitcount) + pal;
        n = n / 10;
    }
    if (pal == num)
    {
        return true;
    }
    else
        return false;
}

int main()
{

    return 0;
}