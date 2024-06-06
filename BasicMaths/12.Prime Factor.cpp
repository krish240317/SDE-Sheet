#include <bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"

bool check_prime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;

            if (n / i != i)
            {
                count++;
            }
        }

        if (count > 2)
            break;
    }

    if (count == 2)
        return true;

    else
        return false;
}

vector<int> countPrimes(int N)
{ // ye toh clear hai loop N ke square root tak hi chalana hai;
  // ek divisor milne ke baad apne aap mil jayega;
    vector<int> ans;

    for (int i = 1; i * i <= N; i++)
    {

        if (N % i == 0)
        {
            if (check_prime(i))
                ans.push_back(i);

            if (N / i != i)
            {
                if (check_prime(N / i))
                    ans.push_back(N / i);
            }
        }
    }

    return ans;
}

int main()
{

    return 0;
}