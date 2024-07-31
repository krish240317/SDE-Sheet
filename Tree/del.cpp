#include "bits/stdc++.h"
using namespace std;

    // Following is the Binary Tree node structure
 template <typename T>

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

 BinaryTreeNode<int>* markparent( map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> & parent,BinaryTreeNode<int>* root,int start)
{
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    BinaryTreeNode<int>* res;
    while(!q.empty())
    {
        auto node=q.front();
        if(node->data=start) res=node; // this done to find node 
        q.pop();
        if(node->left)
        {
            parent[node->left]=node;
            q.push(node->left);
        }
        if(node->right)
        {
            parent[node->right]=node;
            q.push(node->right);
        }
    }
    return res;
}
int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    // Write your code here
    map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> parent;
       BinaryTreeNode<int>* target= markparent(parent,root,start);
        //our parent map is ready 
        //vector<BinaryTreeNode<int>*> ans;
        map<BinaryTreeNode<int>*,int> vis;
        queue<BinaryTreeNode<int>*> q;
        q.push(target);
        vis[target]=1;
        int count=0;
        while(!q.empty())
        {
            int size=q.size();
           // if(level==k) break;
            //level++;
            int flag=0;
            for(int i=0;i<size;i++)
            {
                auto node=q.front();
                q.pop();
                //traverse in all 3 direction 
                if(node->left && !vis[node->left])
                {
                    q.push(node->left);
                    vis[node->left]=1;
                    //if burn mark flage 1\
                    flag=1
                }
                if(node->right && !vis[node->right])
                {
                    q.push(node->right);
                    vis[node->right]=1;
                    flag=1;
                }
                if(parent[node] && !vis[parent[node]])
                {
                    q.push(parent[node]);
                    vis[parent[node]]=1;
                    flag=1;
                }
                
            }
            if(flag){
                    //any one is burned increase count(timer)
                    count++;
                }
        }
        return count;
}
