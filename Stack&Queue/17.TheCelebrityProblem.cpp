#include <bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> &mat)
{
    // code here
    int n = mat.size();
    int top = 0;
    int down = n - 1;
    while (top < down)
    {
        if (mat[top][down] == 1)
        {
            // top can not be celebrity
            top++;
        }
        else if (mat[down][top] == 1)
        {
            // down can not be cele
            down--;
        }
        else
        {
            // both zero
            top++;
            down--;
        }
    }
    if (top > down)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (top == i)
            continue;
        if (mat[top][i] == 0 && mat[i][top] == 1)
        {
            continue;
        }
        return -1;
    }
    return top;
}
int main()
{

    return 0;
}