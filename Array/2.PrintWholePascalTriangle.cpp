#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> generate(int row)
{
    vector<int> ansrow;
    long long ans = 1;
    ansrow.push_back(1);
    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        ansrow.push_back(ans);
    }
    return ansrow;
}
vector<vector<int>> pascalTriangle(int N)
{
    // Write your code here.
    vector<vector<int>> ans;
    for (int i = 0; i <N; i++)
    {
        vector<int> temp=generate(i);
        ans.push_back(temp);
        
    }
    return ans;
}
int main()
{

    return 0;
}