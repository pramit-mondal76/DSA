#include<iostream>
using namespace std;
 
class node{
 
    public:
    int data;
    node* next;
 
    node(int val){
        data=val;
        next=NULL;
    }
};
 
void insertAtHead(node* &head){
    int val;
    cout<<"Enter any value:";
    cin>>val;
    node* n=new node(val);
 
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
 
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
 
void insertAtTail(node* &head){
    int val;
    cout<<"Enter any value:";
    cin>>val;
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
 
    while(temp->next!=head){
        temp=temp->next;
    }
 
    temp->next=n;
    n->next=head;
}
 
void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
 
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
   
    delete todelete;
}
void deleteAtend(node* &head)
{
    if (head == NULL)
    {
        cout << "LinkedList is empty.";
    }
    else if (head->next == head)
    {
        cout << "Deleted element is:" << head->data << endl;
        delete (head);
        head = NULL;
    }
    else
    {
        node *temp = head;
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        delete (temp->next);
        temp->next = NULL;
        temp->next=head;
    }
} 
void deletion(node* &head){
     int pos;
     cout<<"Enter any position:";
     cin>>pos;
    if(pos==1){
        deleteAtHead(head);
        return;
    }
      node* temp=head;
      int count=1;
 
      while(count!=pos-1){
          temp=temp->next;
          count++;
      }
 
      node* todelete=temp->next;
      temp->next=temp->next->next;
 
      delete todelete;
}
 
void display(node* head){
 
 
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
    
}
 
 
int main(){
 
    node* head=NULL;
    
    int n;
    while (1)
    {
    cout<<"\n1.delete at end\n2.Delete at front \n3.Display\n4.insert at end\n5.insert at front\n6.exit"<<endl;
        cout<<"\nEnter any choice:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            deleteAtend(head);
            break;
        case 2:
            deleteAtHead(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            insertAtTail(head);
            break;
        case 5:
             insertAtHead(head);
             break;
        case 6:
            exit(0);           
        default:
           cout<<"wrong choice.";
        }
    }
 
    return 0;
}