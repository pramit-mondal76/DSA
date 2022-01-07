#include<iostream>
using namespace std;
class list;
class node{
  int data;
  node* next;
  public:
    node(int d)
    {
       data=d;
       next=NULL;
    }
 friend class list;
};
class list
{
  node* head;
  node* tail;
  public:
   list()
   {
       head=NULL;
       tail=NULL;
   }
   void push_front()
   {
       int data;
        cout<<"enter any element:";
        cin>>data;
       if(head==NULL)
       {
           node* n=new node(data);
           head=tail=n;
       }
       node* n =new node(data);
       n->next=head;
       head=n;
   }
   void push_back()
   {    
       int data;
        cout<<"enter any element:";
        cin>>data;
        if(head==NULL)
       {
           node* n=new node(data);
           head=tail=n;
       }
       node* n =new node(data);
       tail->next=n;
       tail=n;
   }
};

int main(){
    
    return 0;
}