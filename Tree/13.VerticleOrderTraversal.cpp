#include<bits/stdc++.h>
using namespace std;

 //* Definition for a binary tree node.
 //it uses multiset as it need orderd answer when x and y is same
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
     queue<pair<TreeNode*,pair<int,int>>> q;
     map<int,map<int,vector<int>>> m;
     q.push({root,{0,0}});
     while(!q.empty())
     {
        auto p=q.front();
        q.pop();
        auto temp=p.first;
        int x=p.second.first;
        int y=p.second.second;

        m[x][y].push_back(temp->val);

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
     vector<vector<int>> ans;
     for(auto x:m )
     {
        vector<int> v;
        for(auto it:x.second)
        {
            for(auto ele:it.second)
            {
                v.push_back(ele);
            }
        }
        ans.push_back(v);
     }
     return ans;
    }
};
int main(){
     
return 0;
}