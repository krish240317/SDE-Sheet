#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int robotSim(vector<int> &arr, vector<vector<int>> &obstacles)
    {
        set<string> obs;
        int n = arr.size();
        for (auto it : obstacles)
        {

            // obstacles[it[1]];
            string key = to_string(it[0]) + '_' + to_string(it[1]);
            obs.insert(key);
        }
        int x = 0, y = 0;
        int ans = 0;
        pair<int, int> dir = {0, 1}; // initially facing north
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -2)
            {
                // turn left ;
                // by observation we get that x  becomes -y and y becimes x
                dir = {-dir.second, dir.first};
            }
            else if (arr[i] == -1)
            {
                // turn right
                dir = {dir.second, -dir.first};
            }
            else
            {
                // move in direction
                for (int j = 0; j < arr[i]; j++)
                {
                    // move arr[i] steps
                    int newx = x + dir.first;
                    int newy = y + dir.second;

                    string check = to_string(newx) + '_' + to_string(newy);

                    if (obs.find(check) != obs.end())
                    {
                        break;
                    }
                    x = newx;
                    y = newy;
                }
            }
            ans = max(ans, x * x + y * y);
        }
        return ans;
    }
};
int main()
{

    return 0;
}