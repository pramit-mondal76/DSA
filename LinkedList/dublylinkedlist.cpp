#include <iostream> //push in front in linkedlist....
using namespace std;
class list; // forward declaration
class node
{
    int data;
    node *next;
    node *prev;

public:
    node(int d) // node(int d):data(d),next(NULL){}
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
    list() // list():head(NULL),tail(NULL){}
    {
        head = NULL;
        tail = NULL;
    }
    void push_back(int data)
    {

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
    void push_front(int data)
    {

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
        delete temp;
    }
    void deletion(int pos)
    {
        if (pos == 0)
        {
            deleteAtHead();
            return;
        }
        else
        {
            node* temp = head;
            int count = 0;
            while (temp != NULL && count != pos)
            {
                temp = temp->next;
                count++;
            }
            temp->prev->next = temp->next;

            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }
            delete temp;
        }
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
    void insert(int data, int pos)
    {

        if (pos == 0)
        {
            push_front(data);
            return;
        }
        node *temp = head;
        for (int jump = 0; jump < pos - 1; jump++)
        {
            temp = temp->next;
        }
        node *n = new node(data);
        n->next = temp->next;
        n->prev = temp;
        n->next->prev = n;
        temp->next = n;
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
    l.push_back(5);

     l.display();

    // l.insert(100, 2);

    // l.display();
    // l.deleteAtHead();
    // l.display();
    // l.deleteAtTail();
    // l.display();
    l.deletion(0);
    l.display();
    l.insert(100,1);
    l.display();

    return 0;
}