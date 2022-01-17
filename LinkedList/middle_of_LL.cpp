#include<iostream>
using namespace std;
class node
{
   public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void push(node* &head,int key)
{
    
    node* n=new node(key);
    if(head == NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void printMiddle(node* &head)
{
    node* temp=head;
    node* curr=head;
    
        if (head!=NULL)
        {
            while (temp != NULL && temp->next != NULL)
            {
                temp = temp->next->next;
                curr = curr->next;
            }
            cout << "The middle element is [" << curr->data << "]" << endl;
        }
}

int main(){

    node* head=NULL;
    push(head,1);
    push(head,3);
    push(head,4);
    push(head,5);
    display(head);
    printMiddle(head);

    return 0;
}