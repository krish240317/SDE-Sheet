#include <bits/stdc++.h>
using namespace std;

class StockSpanner
{
public:
    vector<int> v;
    StockSpanner()
    {
        // If v was already initialized with some values, this statement clears all the current elements in v and makes it an empty vector.
        // In essence, it resets v to an empty state without needing to explicitly call v.clear()
        v = vector<int>();
    }

    int next(int x)
    {
        v.push_back(x);
        int count = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] <= x)
                count++;
            else
            {
                break;
            }
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
int main()
{

    return 0;
}