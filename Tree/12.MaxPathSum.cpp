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
    int maxpath(TreeNode *root, int &ans)
    {
        if (root == NULL)
            return 0;

        int leftsum = maxpath(root->left, ans);
        int rightsum = maxpath(root->right, ans);
        if (leftsum < 0)
            leftsum = 0;
        if (rightsum < 0)
            rightsum = 0;
        ans = max(ans, root->val + leftsum + rightsum);
        return root->val + max(leftsum, rightsum);
    }

    int maxPathSum(TreeNode *root)
    {
        int ans = root->val;

        maxpath(root, ans);
        return ans;
    }
};
int main()
{

    return 0;
}