#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() == 0)
                    return false; // if direct closing bracket comes
                char x = st.top();
                st.pop();
                if ((x == '(' && s[i] == ')') || (x == '[' && s[i] == ']') || (x == '{' && s[i] == '}'))
                    continue;
                return false;
            }
        }
        if (st.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}