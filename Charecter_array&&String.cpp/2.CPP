#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100]="apple";
    char b[100];
    //calculate the length
    cout<<strlen(a)<<endl;

    //string copy-
    strcpy(b,a);
    cout<<b<<endl;

    //string compare-
    cout<<strcmp(a,b)<<endl;//if equal then we get 0,otherwise we get another value.

    //string concatinate---
    char web[]="www.";
    char domain[]="pramit.com";
    cout<<strcat(web,domain);
    return 0;
}