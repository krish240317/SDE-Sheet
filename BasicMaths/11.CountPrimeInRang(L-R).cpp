#include <bits/stdc++.h>
using namespace std;

// gfg solution

class Solution
{
public:
    vector<int> get_sive(int n)
    {
        vector<int> prime(n + 1, 1);
        prime[0] = prime[1] = 0;

        for (int i = 2; i * i <= n; i++)
        {
            if (prime[i] == 1)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = 0;
                }
            }
        }
        return prime;
    }

    int countPrimes(int L, int R)
    {

        vector<int> prime = get_sive(2 * 100000);
        int cn = 0;
        for (int i = 2; i <= 2 * 100000; i++)
        {
            cn = cn + prime[i];
            prime[i] = cn;
        }
        int count = 0;
        for (int i = L; i <= R; i++)
        {
            count = prime[R] - prime[L - 1];
        }
        return count;
    }
};
//Query base solution 

int main()
{

    return 0;
}