#include<iostream>
using namespace std;
void reversed_array(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[]={1,4,3,2,7,6,8,9};
    int n=sizeof(a)/sizeof(int );
    display(a,n);
    reversed_array(a,n);
    cout<<endl;
    display(a,n);
    return 0;
}