#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void row(int i,vector<vector<int>>& matrix)
{
    int m=matrix[0].size();
    for (int j = 0; j < m; j++)
    {
        if(matrix[i][j]!=0)
        {
            matrix[i][j]=-1;
        }
    }
    
}
void col(int j,vector<vector<int>>& matrix)
{
    int n=matrix.size();
    for (int i = 0; i < n; i++)
    {
        if(matrix[i][j]!=0)
        {
            matrix[i][j]=-1;
        }
    }
    
}
void setZeroes(vector<vector<int>>& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(matrix[i][j]==0)
            {
                row(i,matrix);
                col(j,matrix);
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(matrix[i][j]==-1)
            {
                matrix[i][j]=0;
            }
        }
        
    }
    
    
}
int main(){
     
return 0;
}