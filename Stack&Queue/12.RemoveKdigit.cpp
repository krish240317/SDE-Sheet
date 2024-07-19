#include <bits/stdc++.h>
using namespace std;
string removeKDigits(string arr, int k)
{
    // Write your code here.
    stack<char> st;
    if (arr.length() == k)
        return "0";
    int n = arr.length();
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && k > 0 && (st.top() - '0') > (arr[i] - '0'))
        {
            st.pop();
            k = k - 1;
        }
        st.push(arr[i]);
    }
    //still k left to remove eg-1234567 k=3 (in this case )
    while (k > 0)
    {
        st.pop();
        k--;
    }
    if (st.empty())//because of above while
        return "0";
    string res = "";
    while (!st.empty())
    {
        res = res + st.top();
        st.pop();
    }
    //removere leading zeros 0001000 not valid 100 is valid ans 
    while (res.size() != 0 && res.back() == '0')
    {
        res.pop_back();
    }
    reverse(res.begin(), res.end());
    if (res.empty())
        return "0";
    return res;
}

int main()
{

    return 0;
}