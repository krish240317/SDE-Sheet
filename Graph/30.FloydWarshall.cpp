#include <bits/stdc++.h>
using namespace std;

void shortest_distance(vector<vector<int>> &matrix)
{
    // Code here
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1)
            {
                // make it infinte
                matrix[i][j] = 1e9;
            }
            if (i == j)
                matrix[i][j] = 0;
        }
    }

    for (int via = 0; via < n; via++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = min(matrix[i][j], matrix[i][via] + matrix[via][j]);
            }
        }
    }

    // to veryfy negative cycle we can do
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(matrix[i][j]<0)
    //         {
    //            //do what you want
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1e9)
            {
                // make it to its form
                matrix[i][j] = -1;
            }
        }
    }
}
int main()
{

    return 0;
}