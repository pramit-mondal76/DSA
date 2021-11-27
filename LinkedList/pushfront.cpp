#include <iostream> //push in front in linkedlist....
using namespace std;
class list; // forward declaration
class node
{
    int data;
    node *next;

public:
    //[create a new constructor...]
    node(int d) // node(int d):data(d),next(NULL){}
    {
        data = d;
        next = NULL;
    }
    friend class list;//A friend function can access the private and protected data of a class
};

class list
{
    node *head;
    node *tail;

public:
    list() // list():head(NULL),tail(NULL){}
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int data)
    {
        if (head == NULL)
        {
            node *n = new node(data);
            head = tail = n; // when there will not any node..this means that the new node is head and also the tail.
            return;          // return nothing.
        }
        else
        {
            node *n = new node(data);
            n->next = head; // when we add a new node infornt of current node then linked the next of new node with the head .
            head = n;       // now n will be the head.
        }
    }
    void push_back(int data)
    {
        if (head == NULL)
        {
            node *n = new node(data);
            head = tail = n; // when there will not any node..this means that the new node is head and also the tail.
            return;          // return nothing.
        }
        else
        {
            node *n = new node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insert(int data, int position)
    {
        if (position == 0)
        {
            push_front(data);
            return;
        }
        // otherwise-->
        node *temp = head;
        for (int jump = 0; jump < position - 1; jump++)
        {
            temp = temp->next; // increament the next of the temp node at the condition of position-1.
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "No node found" << endl;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout <<"NULL"<< endl;
        }
    }
    //search operaion(linear search.)
    bool search(node* head,int key)
    {
        node* temp= head;
        while(temp!=NULL)
        {
            if(temp->data == key)
                return true;
            temp=temp->next;
        }

        return false;
    }
    //recursively
    bool searchRecursive(node* head,int key)
    {
        if(head==NULL) return false;

        //recursive case check at head, remaining linked list.
        if(head->data==key) return true;
        else return searchRecursive(head->next,key);
    }
};

int main()
{
    node* head=NULL;
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    l.push_back(5);
    
    l.display();

    //l.insert(100, 3);

    //l.display();
    int key;
    cin>>key;
    if(l.searchRecursive(head,key))
    {
        cout<<"Element found."<<endl;
    }
    else
    {
         cout<<"element not found.";
    }
    return 0;
}