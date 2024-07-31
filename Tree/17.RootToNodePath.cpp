#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
  
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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


bool getpath(TreeNode<int> *root,vector<int> &ans, int x)
{
	//using inorder traversal
	if(root==NULL)
	{
		return false;
	}
	//push in vector and checkk if root->data==x or not
	ans.push_back(root->data);
	if(root->data==x) return true ;

	if(getpath(root->left,ans,x) || getpath(root->right, ans, x))
	return true;

	//renove by trackbacking 
	ans.pop_back();
	return false;

}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	if(root==NULL)
	{
		return ans;
	}
	getpath(root ,ans,x);
	return ans;
}

int main(){
     
return 0;
}