#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
 
   TreeNode(int val1)
{
    val=val1;
    left=right=NULL;    
}
};

void inorder(TreeNode* root,vector<int> &v)
{
     if(root == NULL )
        return;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
}
    vector<int> inorderTraversal(TreeNode* root) {
        //recursion L Root R
        vector<int> v;
        inorder(root,v);
        return v;
       
    }

//Without recursion
vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> v;
        TreeNode *node=root;

        while(true)
        {
            if(node != NULL)
            {
                st.push(root);
                node=node->left;
            }
            else
            {
                if(st.empty()==true) break;
                node=st.top();
                st.pop();
                v.push_back(node->val);
                node=node->right;

            }
        }
        return v;
    }

int main(){
     
return 0;
}