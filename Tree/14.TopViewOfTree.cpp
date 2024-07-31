#include<bits/stdc++.h>
using namespace std;


    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };


vector<int> getTopView(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> ans;
    queue<pair<TreeNode<int>*,int>> q;
    
    //map of {level,first element}
    map<int,int> m;
    //{root,verticle}
    q.push({root,0});
    while(!q.empty())
    {
        auto temp=q.front();
        auto node=temp.first;
        q.pop();
        int y= temp.second;
        if(m.find(y)==m.end()) m[y]=node->data;

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