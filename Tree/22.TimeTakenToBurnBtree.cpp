#include <bits/stdc++.h>
using namespace std;


template <typename T>

class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int> *markparent(map<BinaryTreeNode<int> *, BinaryTreeNode<int> *> &parent, BinaryTreeNode<int> *root, int start)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    BinaryTreeNode<int> *res;
    while (!q.empty())
    {
        auto node = q.front();
        q.pop();
        if (node->data == start)
        {
            res = node;
        } // this done to find node

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
    return res;
}
int timeToBurnTree(BinaryTreeNode<int> *root, int start)
{
    // Write your code here
    if (!root)
        return 0;
    map<BinaryTreeNode<int> *, BinaryTreeNode<int> *> parent;
    BinaryTreeNode<int> *target = markparent(parent, root, start);
    // our parent map is ready
    vector<BinaryTreeNode<int> *> ans;
    map<BinaryTreeNode<int> *, int> vis;
    queue<BinaryTreeNode<int> *> q;
    q.push(target);
    vis[target] = 1;
    int count = 0;
    while (!q.empty())
    {
        int size = q.size();
        // if(level==k) break;
        // level++;
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            auto node = q.front();
            q.pop();
            // traverse in all 3 direction
            if (node->left && !vis[node->left])
            {
                flag = 1;
                q.push(node->left);
                vis[node->left] = 1;
                // if burn mark flage 1
            }
            if (node->right && !vis[node->right])
            {
                flag = 1;
                q.push(node->right);
                vis[node->right] = 1;
            }
            if (parent[node] && !vis[parent[node]])
            {
                flag = 1;
                q.push(parent[node]);
                vis[parent[node]] = 1;
            }
        }
        if (flag)
        {
            // any one is burned increase count(timer)
            count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}