#include <iostream>
using namespace std;
#define size 5
int front = -1, rear = -1, arr[size];
int isEmpty(){
    if(rear == front)
        return 1;
    else
        return 0;
}
 
//check stack is full or not
int isFull(){
    if(rear == size - 1)
        return 1;
    else   
        return 0;
}

void push()
{
    int val;
    if (!isFull())
    {
        cout << "enter any value: ";
        cin >> val;
        rear = rear + 1;
        arr[rear] = val;
        
    }
    else
    {
        cout << "\n Queue is full.";
    }
}
void pop()
{
    if (!isEmpty())
    {
        front = front + 1;
        int data = arr[front];
        cout<<"deleted element is"<<data;
    }
    else
    {
        cout << "\nqueue is empty.";
    }
}
void display()
{

    if (rear == front)
    {
        cout << "\nqueue is empty.";
    }
    else
    {
        cout << "Queue is:\n";
        for (int i = front+1; i <= rear; i++)
        {
            cout << arr[i]<<" ";
        }
    }
}
int main()
{

    int ch;
    while (1)
    {
        cout << "\n1.push\n2.pop\n3.display\n4.exit\n";
        cout << "Enter any choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "invalid.";
        }
    }
    return 0;
}