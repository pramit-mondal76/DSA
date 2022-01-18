#include<iostream>
using namespace std;
int factorial(int v)
{
    if(v==0)return 1;
    return v* factorial(v-1);
}

int main(){
    int val;
    cout<<"Enter any value :";
    cin>>val;
    cout<<"\nfacorial of "<<val<<" is:"<<factorial(val);
    return 0;
}