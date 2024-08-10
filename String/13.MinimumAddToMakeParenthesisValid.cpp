#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int n = s.size();
        int count = 0;
        int ccount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else if (s[i] == ')' && count == 0)
            {
                ccount++;
            }
            else if (s[i] == ')' && count != 0)
            {
                count--;
            }
        }
        return abs(count) + ccount;
    }
};

int main()
{

    return 0;
}