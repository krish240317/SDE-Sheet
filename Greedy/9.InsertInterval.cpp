#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &arr, vector<int> &newinterval)
    {
        vector<vector<int>> ans;
        int i = 0;
        int n = arr.size();
        // left interval
        while (i < n && arr[i][1] < newinterval[0])
        {
            ans.push_back(arr[i]);
            i++;
        }
        // overlaping part
        // insertion
        while (i < n && arr[i][0] <= newinterval[1])
        {
            newinterval[0] = min(newinterval[0], arr[i][0]);
            newinterval[1] = max(newinterval[1], arr[i][1]);
            i++;
        }
        ans.push_back(newinterval);
        // right part
        while (i < n)
        {
            ans.push_back(arr[i]);
            i++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}