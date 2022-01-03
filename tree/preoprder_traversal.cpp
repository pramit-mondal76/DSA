#include<iostream>
using namespace std;
//Preorder (Root, Left, Right)
//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//preorder-1 2 4 5 7 3 6
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
void printpreorder(node* root)
{
    if(root==NULL)
    {
        return ;

    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
    
}

int main(){
    cout<<"enter the values of tree:";
    node* root=buildtree();
    cout<<"preorder tree is:"<<endl;
    printpreorder(root);
    return 0;
}