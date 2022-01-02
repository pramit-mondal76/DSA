#include<iostream>
using namespace std;
void sampletext(int & income)//REFERENCE VERIABLE
{
    float tax=.10;
    income=income-income*tax;
}

int main(){
    // int x=13;
    // int * ptr=&x;
    //de reference variable-As we already know that "what is a pointer", a pointer is a variable that stores the address of another variable. The dereference operator is also known as an indirection operator, which is represented by (*). When indirection operator (*) is used with the pointer variable, then it is known as dereferencing a pointer. When we dereference a pointer, then the value of the variable pointed by this pointer will be returned.
    // cout<<ptr<<endl;
    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*(&ptr)<<endl;


    //reference variable-
    //pass object by reference by reference variable:
    // int x=12;
    // int &y=x;
    // x++;
    // cout<<x<<" "<<y;
    int money;
    cin>>money;
    sampletext(money);
    cout<<money<<endl;
    return 0;
}