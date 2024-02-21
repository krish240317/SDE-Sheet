#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        // The reason for doing this is to ensure that the last word in the string is processed correctly. The code is designed to push a word onto the stack whenever it encounters a space. If there's no space at the end of the string, the last word won't be pushed onto the stack.
        s += " ";
        string c = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (c.length() > 0)
                    st.push(c);
                c = "";
            }
            else
                c += s[i];
        }
        string ans = "";

        while (st.size() != 1)
        {
            ans += st.top() + " ";
            st.pop();
        }
        ans += st.top(); // to avoid extra space at the end

        return ans;
    }
};
int main()
{

    return 0;
}