#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 


//Following is the Binary Tree node class
    //It uses vector insted of multiset as not needed in order at same x and y
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};


vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
     queue<pair<TreeNode<int>*,pair<int,int>>> q;
     map<int,map<int,vector<int>>> m;
     q.push({root,{0,0}});
     while(!q.empty())
     {
        auto p=q.front();
        q.pop();
        auto temp=p.first;
        int x=p.second.first;
        int y=p.second.second;
        m[x][y].push_back(temp->data);

        if(temp->left)
        {
            q.push({temp->left,{x-1,y+1}});
        }
        if(temp->right)
        {
            q.push({temp->right,{x+1,y+1}});
        }
     } 
     //our map gets ready now just iterate on 
     vector<int> ans;
     for(auto i: m) {
            
            for(auto j:i.second) {
                
                for(auto k:j.second)
                {
                    ans.push_back(k);
                }
            }
        }
     return ans;
}
int main(){
     
return 0;
}