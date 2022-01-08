/*1.BTS problem follows a recursive structure
2.mostly problem can solve by dividing the problem into subproblem and making recursive call on subtrees
3.Inorder Traversal is always sorted
4.BTS makes searching eficient.*/
#include<iostream>
using namespace std;
class node
{
    public:
      int key;
      node* left;
      node* right;
    node(int key)
    {
        this->key=key;
        left=right=NULL;
    }
};
node* insert(node* root,int key)
{
    if(root == NULL)
    {
        return new node(key);
    }
    if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    else
    {
       root->right=insert(root->right,key);
    }
    return root;
}
void printInorder(node* root)
{
    if(root== NULL)
    {
        return;
    }
    printInorder(root->left);
    cout<<root->key<<" ,";
    printInorder(root->right);
}
bool search(node * root,int key)
{
    if(root ==NULL)
    {
        return false;
    }
    if(root->key==key)
    {
        return true;
    }
    if(key<root->key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);

}

int main(){
    node* root=NULL;
    root=insert(root,7);
    root=insert(root,6);
    root=insert(root,4);
    root=insert(root,9);
    root=insert(root,12);
    root=insert(root,10);
    root=insert(root,11);

    printInorder(root);
    int key;
    cout<<"\nEnter any key value:";
    cin>>key;
    cout<<search(root,key)<<endl;


    
    return 0;
}