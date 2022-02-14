#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
    if(n==1 or n==0) return true;
    if(arr[0]<arr[1] and issorted(arr+1,n-1)) return true;
    else return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<issorted(arr,n);

    return 0;
}