#include <iostream> //push in front in linkedlist....
using namespace std;
class list; 
class node
{
    int data;
    node *next;
    node *prev;

public:
    node(int d) 
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
    // ~node()
    // {
    //     if (next != NULL)
    //     {
    //         delete next;
    //     }
    //     cout << "deleting data is " << data << endl;
    // }
    friend class list;
};

class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void push_back()
    {
        int data;
        cout<<"Enter any data:";
        cin>>data;
        if (head == NULL)
        {
            node *n = new node(data);
            head = tail = n;
            return;
        }
        else
        {
            node *n = new node(data);
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }
    void push_front()
    {
        int data;
        cout<<"Enter any data:";
        cin>>data;
        if (head == NULL)
        {
            node *n = new node(data);
            head = tail = n;
            return;
        }
        else
        {
            node *n = new node(data);
            n->next = head;
            head->prev = n;
            head = n;
        }
    }
    void deleteAtHead()
    {
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        cout<<"Deleted element:"<<temp->data<<endl;
        delete temp;
    }
    void deleteAtTail()
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        cout<<"Deleted element:"<<temp->data<<endl;
        delete temp;
    }
    
    
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
   
};

int main()
{
    node *head = NULL;
    list l;
    int n;
    while (1)
    {
    cout<<"\n1.delete at end\n2.Delete at front \n3.Display\n4.insert at end\n5.insert at front\n6.exit"<<endl;
        cout<<"\nEnter any choice:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            l.deleteAtTail();
            break;
        case 2:
            l.deleteAtHead();
            break;
        case 3:
            l.display();
            break;
        case 4:
            l.push_back();
            break;
        case 5:
            l.push_front();
             break;
        case 6:
            exit(0);           
        default:
           cout<<"wrong choice.";
        }
    }
 


    return 0;
}