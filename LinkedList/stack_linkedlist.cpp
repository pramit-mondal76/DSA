#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *top;
int isempty()
{
    return top==NULL;
}
void push()
{
    int data;
    cout << "enter the element to insert:" << endl;
    cin >> data;
    struct node *temp;
    temp = new node();
    if (!temp)
    {
        cout << "\n heap overflow. ";
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}
void pop()
{
    struct node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        //exit(1);
    }
    else
    {
        temp = top;
 
        
        top = top->link;

        temp->link = NULL;
        delete(temp);
    }
}
 
void display()
{
    struct node *temp;
    if (top == NULL)
    {
        cout << "\nstack underflow.";
        //exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->link;
        }
        cout<<"NULL";
    }
}

int main()
{
    int n;
    while (1)
    {
        cout<<"\n1.push\n2.display\n3.isempty\n4.delete\n5.exit"<<endl;
        cout<<"\nEnter any choice:"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
             display();
             break;
        case 3:
             isempty();
             break;
        case 4:
             pop();
             break;             
        case 5:
            exit(0);             
        default:
            printf("\nWrong Choice!!");
        }
    }

    return 0;
}