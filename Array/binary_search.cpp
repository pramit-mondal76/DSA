//binary search...
//search space sould be sorted or other terms search space is monotonic(val should be non decreasing or non-increasing.)
//binary search is more efficient and fast than linear search......and time complexity of binary seraching is O(log n).
//for loop its be----n/k^2=1->n=k^2->k=log n; :::time complexity-O(log n).
#include<iostream>
using namespace std;
int binary_search(int arr[],int n ,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]=key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
    }
    return -1;
}

int main(){

    int a[]={1,4,3,2,7,6,8,9};
    int n=sizeof(a)/sizeof(int );
    int key;
    cout<<"Enter any key value -";
    cin>>key;
    int index=binary_search(a,n,key);
    if(index!=-1)
    {
        cout<<key<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<"is not found"<<endl;
    }

    
    return 0;
}