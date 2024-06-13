#include <bits/stdc++.h>
using namespace std;

 // Definition for a binary tree node.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if (root == NULL)
            return ans;
        q.push(root);
        bool lefttoright = true; // flage
        while (!q.empty())
        {
            int s = q.size();
            vector<int> row(s);
            for (int i = 0; i < s; i++)
            {
                TreeNode *temp = q.front();
                q.pop();

                int index = (lefttoright) ? i : (s - 1 - i);
                row[index] = temp->val;
                // check its left right if exsist push in queue
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            // after completing level
            lefttoright = !lefttoright;
            ans.push_back(row);
        }
        return ans;
    }
};
int main()
{

    return 0;
}