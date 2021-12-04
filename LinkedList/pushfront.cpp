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
    friend class list; // A friend function can access the private and protected data of a class
};

class list
{
    node *head;
    node *tail;
    int searchHealper(node *start, int key) // local verriable
    {                                       // base case
        if (start == NULL)
        {
            return -1;
        }
        // value matches
        if (start->data == key)
        {
            return 0;
        }
        int subIndex = searchHealper(start->next, key);
        if (subIndex == -1)
        {
            return -1;
        }
        return subIndex + 1;
    }

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
            cout << "NULL" << endl;
        }
    }
    // search operaion(linear search.)
    bool search(node *head, int key)
    {
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
    int searchRecursive(int key)
    {
        int idx = searchHealper(head, key);
        return idx;
    }
    void pop_front()
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void reverse()//reversed of a linked list
    {
        node*c = head;
        node*p = NULL ;
        node* n;
        while (c != NULL)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        head=p;
    }
};

int main()
{
    node *head = NULL;
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    l.push_back(5);

    l.display();

    // l.insert(100, 3);

    // l.display();
    l.insert(42, 2);
    l.display();
    l.pop_front();
    l.display();
    l.reverse();
    l.display();
    return 0;
}