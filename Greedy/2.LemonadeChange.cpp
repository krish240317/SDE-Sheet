#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int> &arr)
    {
        map<int, int> m;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
            if (arr[i] == 5)
                continue;
            if (arr[i] == 10)
            {
                // check 5 count in map
                if (m[5] > 0)
                {
                    m[5]--;

                    // continue;
                }
                else
                {
                    return false;
                }
            }
            else if (arr[i] == 20)
            {
                if (m[10] > 0 && m[5] > 0)
                {
                    m[10]--;
                    m[5]--;
                }
                else if (m[5] > 2)
                {
                    m[5] = m[5] - 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}