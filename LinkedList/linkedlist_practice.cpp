#include <iostream> //push in front in linkedlist.....
using namespace std;
class list; // forward declaration
class node
{
    int data;
    node *next;

public:
    //[create a new constructor...]constructor name is same as class.-constructructor is being auutomatically called at the time of object declaration.return type of constructor is the class type
    node(int d) // node(int d):data(d),next(NULL){}
    {
        data = d;
        next = NULL;
    }
    ~node() // destructor is a special ,member func that is automatically exucuated,when a objected is created by constructor destructor is destroy the object.
    // deallocate the memory.that has been allocated for the object by the constructor.
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "deleting data is " << data << endl;
    }
    friend class list; // A friend function can access the private and protected data of a class
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
    void push_front()
    {
        int data;
        cout<<"enter any element:";
        cin>>data;
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
    void push_back()
    {
        int data;
        cout<<"enter any element:";
        cin>>data;
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
    void insert()
    {
        int data;
        cout<<"enter any element:";
        int position;
        cout<<"enter any position:";
        if (position == 0)
        {
            push_front();
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
            cout << "NULL" << endl;
        }
    }
    // search operaion(linear search.)
    bool search()
    {
        node *head;
        int key;
        cout<<"enter any element:";
        cin>>key;
        node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
                return idx;
            idx++;
            temp = temp->next;
        }

        return -1;
    }
    // recursively search
    
    void pop_front()
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_end()
    {
        node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete temp;
    }
    /*~list()
    {
        if (head != NULL)
        {
            delete head;
        }
    }*/
    void reverse() // reversed of a linked list
    {
        node *c = head;
        node *p = NULL;
        node *n;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
    }
};

int main()
{
    node *head = NULL;
    list l; // static object
    int n;
    while (1)
    {
        cout<<"\n1.delete at end\n2.Delete at front \n3.Display\n4.insert at end\n5.insert at front\n6.insert at any position\n7.search\n8.exit"<<endl;
        cout<<"\nEnter any choice:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            l.pop_end();
            break;
        case 2:
            l.pop_front();
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
            l.insert();
            break;
        case 7:
             l.search();
             break;  
        case 8:
            exit(0);           
        default:
            printf("\nWrong Choice!!");
        }
    }
    return 0;
}