#include <bits/stdc++.h>
using namespace std;


   // Following is the Binary Tree node structure
 template <typename T>
    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

void changeTree(BinaryTreeNode<int> *root)
{
    // Write your code here.
    if (root == NULL)
    {
        return;
    }
    int childsum = 0;
    if (root->left)
    {
        childsum += root->left->data;
    }
    if (root->right)
    {
        childsum += root->right->data;
    }
    if (childsum >= root->data)
    {
        //  root->data=childsum;
    }
    else
    {
        if (root->left)
        {
            root->left->data = root->data;
        }
        else if (root->right)
        {
            //we can do both also 
            root->right->data = root->data;
        }
    }

    // Recursively call the function
    // on the left and right children.

    changeTree(root->left);
    changeTree(root->right);

    // update the parent (root)
    int tot = 0;
    if (root->left)
    {
        tot += root->left->data;
    }
    if (root->right)
    {
        tot += root->right->data;
    }

    // If either left or right child
    // exists, update the current node's
    // value with the total sum.
    if (root->left or root->right)
    {
        root->data = tot;
    }
}
int main()
{

    return 0;
}