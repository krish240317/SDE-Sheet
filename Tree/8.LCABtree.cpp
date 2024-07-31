#include<bits/stdc++.h>
using namespace std;

 //Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         //
         //base case
         if(root==NULL || root==p || root== q)
         {
             return root;
         }
         TreeNode* left=lowestCommonAncestor(root->left,p,q);
         TreeNode* right=lowestCommonAncestor(root->right,p,q);
         
         //if one node null return other
         if(left ==NULL)
         {
             return right;
         }
         else if(right==NULL)
         {
             return left;
         }
         else
         {
            //case when we got LCA
             return root;
         }
    }
};
int main(){

     
return 0;
}