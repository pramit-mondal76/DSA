//Linear Search:
//time complexity is 0(n)
#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int a[5];
    int n=sizeof(a)/sizeof(int );
    cout<<"array elements are: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int key;
    cout<<"Enter any key value -";
    cin>>key;
    int index=linearSearch(a,n,key);
    if(index!=-1)
    {
        cout<<key<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<" is not found."<<endl;
    }

    
    return 0;
}