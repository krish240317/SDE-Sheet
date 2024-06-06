#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        vector<int> ans;
        for (int i = 1; i * i < num; i++)
        {
            if (num % i == 0)
            {
                ans.push_back(i);
                if (num / i != i)
                {
                    ans.push_back(num / i);
                }
            }
        }
        long sum = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] != num)
            {
                sum += ans[i];
            }
        }
        if (sum == num)
            return true;
        return false;
    }
};
int main()
{

    return 0;
}