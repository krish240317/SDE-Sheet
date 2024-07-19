#include <bits/stdc++.h>
using namespace std;

// #include "bits/stdc++.h"
vector<int> nextSmallerElement(vector<int> &prices, int n)
{
    stack<int> st;
    // int n = prices.size();
    int res[n];
    vector<int> v(n, -1);
    st.push(prices[n - 1]);
    // v[n-1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() > 0 && prices[i] <= st.top())
        {
            st.pop();
        }

        if (!st.empty())
        {
            v[i] = st.top();
        }
        st.push(prices[i]);
    }

    return v;
}
int main()
{

    return 0;
}