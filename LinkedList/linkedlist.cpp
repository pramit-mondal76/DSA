#include <iostream> 
using namespace std;
class node
{
public:
    
    int data;
    node *next;
    node(int d) 
    {
        data = d;
        next = NULL;
    }
    
};

void push_back(node* & head)
{
    int key;
     cout<<"enter any element:";
     cin>>key;
    node* n=new node(key);
    if(head==NULL)
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
void push_front(node* & head)
{
    int key;
    cout<<"enter any element:";
    cin>>key;
    node* n=new node (key);
    n->next=head;
    head=n;
}
void pop_front(node* &head)
{
    if(head==NULL)
    {
        cout<<"LinkedList is empty.";
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    cout << "Deleted element is:" << temp->data << endl;
    delete temp;
}
void pop_back(node* &head)
{
   if (head == NULL)
    {
        cout << "LinkedList is empty.";
    }
    else if (head->next == NULL)
    {
        cout << "Deleted element is:" << head->data << endl;
        delete (head);
        head = NULL;
    }
    else
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        cout << "Deleted element is :" << temp->next->data << endl;
        delete (temp->next);
        temp->next = NULL;
    }
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
bool search(node* head)
{
    int key;
    cout<<"enter any element:";
    cin>>key;
    node* temp= head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    node* head=NULL;
    int n;
    while (1)
    {
    cout<<"\n1.delete at end\n2.Delete at front \n3.Display\n4.insert at end\n5.insert at front\n6.search\n7.exit"<<endl;
        cout<<"\nEnter any choice:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            pop_back(head);
            break;
        case 2:
            pop_front(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            push_back(head);
            break;
        case 5:
             push_front(head);
             break;
        case 6:
            cout<<search(head);
            break;
        
        case 7:
            exit(0);           
        default:
           cout<<"wrong choice.";
        }
    }
    return 0;

}