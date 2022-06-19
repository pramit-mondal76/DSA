//for odd number last bit is 1 and al even number last bit is 0;
#include <iostream>
using namespace std;
int main()
{
 int x;
 cout<<"Enter any number :";
 cin>>x;
 if(x & 1)
 {
     cout<<"odd"<<endl;
 }
 else
 {
     cout<<"even"<<endl;
 }
}