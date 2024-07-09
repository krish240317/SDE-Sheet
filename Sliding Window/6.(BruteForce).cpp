#include <bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s)
{
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int m[3] = {0};
        for (int j = i; j < n; j++)
        {
            m[s[j] - 'a'] = 1;
            if (m[0] + m[1] + m[2] == 3)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{

    return 0;
}