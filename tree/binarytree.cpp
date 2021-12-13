#include<iostream>
using namespace std;
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
void printPreorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);


}

int main(){
    node* root=buildtree();
    printPreorder(root);
    return 0;
}