#include <iostream>
using namespace std;
#define MAX 5
int top = -1, stack[MAX];

void push()
{
    int val;
    if (top == MAX - 1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        cout << "enter any value to push:";
        cin >> val;
        top = top + 1;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout<<"Deleted element is:"<<stack[top]<<endl;
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"stack empty"<<endl;
    }
    else
    {
        cout<<"stack is-";
        for(int i=top;i>=0;i--)
        {
            cout<<"\n"<<stack[i];
        }
    }
}

int main()
{   
    int ch;
    while(1)
    {
        cout<<"\n1.push\n2.pop\n3.display\n4.exit\n";
        cout<<"Enter any choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:push();
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default:
            cout<<"invalid.";
        }

    }

    return 0;
}