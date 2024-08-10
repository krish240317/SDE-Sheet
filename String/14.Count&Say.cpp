#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string countAndSay(int n)
    {
        // base case
        if (n == 1)
        {
            return "1";
        }
        string say = countAndSay(n - 1);

        string ans = "";
        for (int i = 0; i < say.size(); i++)
        {
            char c = say[i];
            int count = 1; // initially as there will be 1 char in string as c=say[i]

            while (i < say.size() - 1 && say[i] == say[i + 1])
            {
                count++;
                i++;
            }
            ans += to_string(count) + string(1, c);
        }
        return ans;
    }
};

int main()
{

    return 0;
}