#include<bits/stdc++.h>
using namespace std;
class tree{
public:
    int data;
    tree *left;
    tree *right;
 
   tree(int val)
{
    data=val;
    left=right=NULL;    
}
};
//left Root Right
void inorder(tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

int main(){
     tree *root= new tree(1);
     root->left=new tree(2);
     root->right=new tree(3);

     root->left->right=new tree(4);
inorder(root);


return 0;
}