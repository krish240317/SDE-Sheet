#include<bits/stdc++.h>
using namespace std;
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
int maxheight(TreeNode* root ,int &diameter)
{
    if (root==NULL) return 0;
    int left= maxheight(root->left,diameter);
    int right=maxheight(root->right,diameter);
    //after finding left and right on every node you can update diameter 
    diameter=max(diameter,left+right);
    return 1 + max(left,right);
}
//See Dryrun In Video
    int maxDepth(TreeNode* root) {
        int diameter=0;
        maxheight(root,diameter);
        return diameter;
    }
};
int main(){
     
return 0;
}