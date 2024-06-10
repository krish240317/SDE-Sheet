#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeOuterParentheses(string s)
    {

        string ans = "";
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
                count--;
            if (count != 0)
                ans.push_back(s[i]);
            if (s[i] == '(')
                count++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}
