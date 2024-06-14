#include<bits/stdc++.h>
using namespace std;
#include "bits/stdc++.h"


  //  Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


vector<int> bottomView(TreeNode<int> * root){
    // Write your code here.
     vector<int> ans;
    queue<pair<TreeNode<int>*,int>> q;
    map<int,int> m;
    q.push({root,0});
    while(!q.empty())
    {
        auto temp=q.front();
        auto node=temp.first;
        q.pop();
        int y= temp.second;
         m[y]=node->data;

        if(node->left)
        {
            q.push({node->left,y-1});
        }
        if(node->right)
        {
            q.push({node->right,y+1});
        }
    }

    for(auto it:m)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
     
return 0;
}