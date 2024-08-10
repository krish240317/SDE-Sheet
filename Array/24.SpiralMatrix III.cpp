#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int r, int c, int rstart, int cstart)
    {
        vector<vector<int>> ans;

        vector<vector<int>> direction = {
            {0, 1},  // EAST
            {1, 0},  // SOUTH
            {0, -1}, // WEST
            {-1, 0}  // NORTH
        };
        int step = 0; // How much steps to take
        //+1 in case of west and east moving
        int dir = 0; // current direction 0->East
        /* 1->south
           2->West
           3->north */
        ans.push_back({rstart, cstart});
        while (ans.size() < r * c)
        {
            if (dir == 0 || dir == 2)
                step++;
            // check valid cell
            for (int i = 0; i < step; i++)
            {
                rstart += direction[dir][0];
                cstart += direction[dir][1];
                if (rstart >= 0 && rstart < r && cstart >= 0 && cstart < c)
                {
                    ans.push_back({rstart, cstart});
                }
            }

            dir = (dir + 1) % 4;
        }
        return ans;
    }
};

int main()
{

    return 0;
}