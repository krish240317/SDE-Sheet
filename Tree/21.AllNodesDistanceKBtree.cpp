#include <bits/stdc++.h>
using namespace std;

//* Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    void markparent(unordered_map<TreeNode *, TreeNode *> &parent, TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            auto node = q.front();
            q.pop();
            if (node->left)
            {
                parent[node->left] = node;
                q.push(node->left);
            }
            if (node->right)
            {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
    }
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parent;
        markparent(parent, root);
        // our parent map is ready
        vector<int> ans;
        unordered_map<TreeNode *, bool> vis;
        queue<TreeNode *> q;
        q.push(target);
        vis[target] = true;
        int level = 0;
        while (!q.empty())
        {
            int size = q.size();
            if (level == k)
                break;
            level++;
            for (int i = 0; i < size; i++)
            {
                auto node = q.front();
                q.pop();
                // traverse in all 3 direction
                if (node->left && !vis[node->left])
                {
                    q.push(node->left);
                    vis[node->left] = true;
                }
                if (node->right && !vis[node->right])
                {
                    q.push(node->right);
                    vis[node->right] = true;
                }
                if (parent[node] && !vis[parent[node]])
                {
                    q.push(parent[node]);
                    vis[parent[node]] = true;
                }
            }
        }
        while (!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};
int main()
{

    return 0;
}