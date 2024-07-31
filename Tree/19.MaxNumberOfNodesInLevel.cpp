#include <bits/stdc++.h>
using namespace std;

// Following is the TreeNode class structure

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    // {node,order}
    if (root == 0)
        return 0;
    queue<pair<TreeNode<int> *, long>> q;
    q.push({root, 0});
    long ans = 0;
    while (!q.empty())
    {
        int size = q.size();
        long mini = q.front().second;
        long first, last; // to keep track of first index and last index on a level
        // this for loop is to traverse on every node on a level
        long skip = 0;
        for (int i = 0; i < size; i++)
        {
            long current = q.front().second - mini;
            auto node = q.front().first;
            skip++;
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
            //
        }
        ans = max(ans, skip);
    }
    return ans;
}
int main()
{

    return 0;
}