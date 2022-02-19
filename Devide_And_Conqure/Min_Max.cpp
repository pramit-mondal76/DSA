#include<iostream>
using namespace std;
int Minmax(int arr[],int n,int *pmax,int *pmin)//
{
    *pmax=arr[0];
    *pmin=arr[0];
    for(int i=1;i<n;i++)
    {
        if(*pmax>arr[i])
        {
            *pmax=arr[i];
        }
        if(*pmin<arr[i])
        {
            *pmin=arr[i];
        }
    }
}

int main()
{
    int max,min;
    int arr[]={1,6,9,3,2,0};
    int n=sizeof(arr)/sizeof(int);
    Minmax(arr,n,&max,&min);
    cout<<max<<" "<<min;
    return 0;
}