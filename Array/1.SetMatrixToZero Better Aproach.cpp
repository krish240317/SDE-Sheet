#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void row(int i,vector<vector<int>>& matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();
    int col[m] = {-1};
    int row[n] = {-1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                matrix[i][j] = 0;
            } 
        }
    }
}
int main(){
     
return 0;
}