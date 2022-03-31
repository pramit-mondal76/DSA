#include<iostream>
using namespace std;

int front=-1,rear=-1,q[20];

int isempty()
{
    if(rear == front) return 1;
    else return 0;
}
int isfull()
{
     if(rear==rear-1) return 1;
     else return 0;
}
void insert(int item)
{
    rear= rear+1;
    q[rear]=item;
}
int del()
{
    if(isempty())
    {
        cout<<"queue is empty.";
    }
    else
    {
        front=front+1;
        cout<<"Deleted element is "<<q[front];
        return q[front];
    }
}