#include<iostream>
using namespace std;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void heapify(int arr[],int n,int i )
{
    int largest=i;
    int l=2*i +1;
    int r =2*i +2;
    if(l<n and arr[l]>arr[largest])
    {
        largest=l;
    }
    if(r<n and arr[r]>arr[largest])
    {
        largest = r;

    }
    if(largest != i)
    {
        swap(arr,i,largest);

        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2 -1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int j=n-1;j>=0;j--)
    {
        swap(arr,0,j);
        heapify(arr,j,0);

    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapsort(arr, n);
  
    cout << "Sorted array is \n";
    printArray(arr, n);
    return 0;
}