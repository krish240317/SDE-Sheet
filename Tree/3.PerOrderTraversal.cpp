#include<bits/stdc++.h>
using namespace std;

//  Definition for a binary tree node.
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
    vector<int> preorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> st;
        vector<int> v;

        if(root != NULL)
        {
            st.push(root);
        }
        while(!st.empty())
        {
            TreeNode * topele=st.top();
            st.pop();
            v.push_back(topele->val);
            if(topele->right != NULL) st.push(topele->right);
            if(topele->left != NULL ) st.push(topele->left);
        }
        return v;
    }
};
int main(){
     
return 0;
}