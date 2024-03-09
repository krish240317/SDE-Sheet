#include <bits/stdc++.h>
using namespace std;

vector<int> firstNegative(vector<int> arr, int n, int k)
{
    // Write your code here.
    int i = 0;
    int j = 0;
    queue<int> q;
    vector<int> ans;
    while (j < n)
    {
        // find negative and store it in queue
        if (arr[j] < 0)
        {
            q.push(arr[j]);
        }
        if (j - i + 1 < k)
        {
            // not found window
            j++;
        }
        else if (j - i + 1 == k)
        {
            // found window
            if (!q.empty())
            {
                ans.push_back(q.front());
                if (arr[i] == q.front())
                {
                    q.pop();
                }
            }
            else
            {
                ans.push_back(0);
            }

            i++;
            j++;
        }
    }
    return ans;
}
int main()
{

    return 0;
}