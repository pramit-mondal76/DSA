//fibonacci series using tail recursion-
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}

int main(){
    int n;
    cout<<"enter any number :";
    cin>>n;
    cout<<"fibonacci series of "<<n<<"is: "<<fibonacci(n);
    return 0;
}