#include <bits/stdc++.h>
using namespace std;


// * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution
{
public:
    int findleftheight(TreeNode *node)
    {
        int height = 0;
        while (node)
        {
            height++;
            node = node->left;
        }
        return height;
    }
    int findrightheight(TreeNode *node)
    {
        int height = 0;
        while (node)
        {
            height++;
            node = node->right;
        }
        return height;
    }
    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int lh = findleftheight(root);
        int rh = findrightheight(root);
        if (lh == rh)
        {
            // return 2^height-1;
            return (1 << lh) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

int main()
{

    return 0;
}