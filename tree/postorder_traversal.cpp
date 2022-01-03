#include<iostream>
using namespace std;
// Postorder (Left, Right, Root) :
//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//postorder- 4 7 5 2 3 6 1
class node
{
    public:
        int data;
        node* left;
        node* right;

        node(int d)
        {
            data=d;
            left=right=NULL;

        }
};
node* buildtree()
{
   int d;
   cin>>d;
   
    if(d==-1)
    {
        return NULL;
    }
    node* n=new node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n; 

}
void printPostorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    cout<<"enter the values of tree:";
    node* root=buildtree();
    cout<<"post order tree is :";
    printPostorder(root);
     
    return 0;
}