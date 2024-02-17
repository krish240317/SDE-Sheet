#include<bits/stdc++.h>
using namespace std;


 //* Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
int balanceBtree(TreeNode * root)
{
    //first just right ccode to find height of Btree
    if(root==NULL) return 0;
    int left = balanceBtree(root->left);
    int right=balanceBtree(root->right);
    if(left==-1 || right ==-1) return -1;
    if(abs(left-right)>1) return -1;//at every node 
    return 1+max(left,right);
}
    bool isBalanced(TreeNode* root) {
        if(balanceBtree(root)==-1) return false;
        return true;
    }
};
int main(){
     
return 0;
}