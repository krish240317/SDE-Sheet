#include<bits/stdc++.h>
using namespace std;
//The first nested loop swaps the elements across the main diagonal. The condition j < i ensures that each pair of elements is swapped only once. If j were allowed to go up to n-1, each pair of elements would be swapped twice, which would result in the original matrix.
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m =matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
int main(){
     
return 0;
}