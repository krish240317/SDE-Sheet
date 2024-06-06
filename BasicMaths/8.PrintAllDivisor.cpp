#include <bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"
int *printDivisors(int n, int &size)
{
    // Write your code here
    vector<int> ans;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

int main()
{

    return 0;
}