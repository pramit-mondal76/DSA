#include<iostream>
using namespace std;
#define size 5
int front=0,rear=0;
int arr[size];

void push()
{
    int val;
    if((rear+1)%size==front)
    {
        cout<<"Queue is full."<<endl;
    }
    else
    {
        cout<<"Enter any element: ";
        cin>>val;
        rear=(rear+1)%size;
        arr[rear]=val;
    }
}

void pop()
{
    if(rear==front)
    {
        cout<<"Queue is empty."<<endl;
        
    }
    else
    {
        front=(front+1)%size;
        int data=arr[front];
        cout<<"deleted element is : "<<data;
    }
}
void display()
{
    if(front==rear)
    {
        cout<<"queue is empty."<<endl;
    }
    else
    {
        for(int i=(front+1)%size;i!=rear;i=(i+1)%size)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[rear];
    }
}
int main(){
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