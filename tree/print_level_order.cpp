#include<iostream>
#include<queue>
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
/*Todo: Implement Level Order Traversal Expected output
1
2 3
4 5 6
7
input-1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
*/
void LevelorederPrint(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        if(temp==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return ;
}
int main(){
    node* root=buildtree();
    LevelorederPrint(root);
    
    return 0;
}