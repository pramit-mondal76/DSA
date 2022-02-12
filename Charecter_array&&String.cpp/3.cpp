//Largest String...
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    cin.get();//it consume the new line(but it takes spaces...untill there are aany new line.)
    char s[100];
    char l[100];
    while(n--)
    {
        cin.getline(s,100);
    }

    return 0;
}