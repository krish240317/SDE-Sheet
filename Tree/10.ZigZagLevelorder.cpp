#include <bits/stdc++.h>
using namespace std;


//This is for when you have to print single node in zig zag manner like 1 3 2 4 5 6
//not like 1  
//         3 2
//         4 5 6

//  Definition for a binary tree node.

     template <typename T = int>
    class BinaryTreeNode
     {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> ans;

    if(root == nullptr) return ans;

    queue<BinaryTreeNode<int> *> q;
    
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);

        for(int i=0; i<size; i++){
            BinaryTreeNode<int>  * node = q.front();
            q.pop();

            // find position to fill node's value
            int index = (leftToRight) ? i : (size - 1 - i);

            row[index] = node -> data;
            if (node -> left) {
                q.push(node -> left);
            }
            if (node -> right) {
                q.push(node -> right);
            }
        }

        // after this level
        leftToRight = !leftToRight;
        
        for(auto x: row)
            ans.push_back(x);
    }
    return ans;
}
