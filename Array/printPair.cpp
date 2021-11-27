#include<iostream>
using namespace std;
void printPair(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<a[i]<<","<<a[j]<<endl;
        }
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int );
    printPair(a,n);
    return 0;
}