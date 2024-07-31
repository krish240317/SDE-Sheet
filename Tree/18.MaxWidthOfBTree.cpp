#include <bits/stdc++.h>
using namespace std;

// * Definition for a binary tree node.
struct TreeNode
{
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
    int widthOfBinaryTree(TreeNode *root)
    {

        // {node,order}
        if (root == 0)
            return 0;
        queue<pair<TreeNode *, long>> q;
        q.push({root, 0});
        long ans = 0;
        while (!q.empty())
        {
            int size = q.size();
            long mini = q.front().second;
            long first, last; // to keep track of first index and last index on a level
            // this for loop is to traverse on every node on a level

            for (int i = 0; i < size; i++)
            {
                long current = q.front().second - mini;
                auto node = q.front().first;
                q.pop();
                if (i == 0)
                {
                    // it will befirst index
                    first = current;
                }
                if (i == size - 1)
                {
                    // it will be last
                    last = current;
                }
                if (node->left)
                {
                    q.push({node->left, current * 2 + 1});
                }
                if (node->right)
                {
                    q.push({node->right, current * 2 + 2});
                }
            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};

int main()
{

    return 0;
}