//Take larger element to the end by repeatedly swapping the adjacent elements.
//here happen no swapping only shifting.
#include<iostream>
using namespace std;
void display(int array[], int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void insertion_sort(int a[],int n)
{
   for (int i=1;i<=n-1;i++)
   {
       int current=a[i];
       int prev=i-1;
       while(prev>=0 and a[prev]>a[prev+1])
       {
           a[prev+1]=a[prev];
           prev=prev-1;
       }
       a[prev+1]=current;

   }
}
int main(){
    int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];    //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   insertion_sort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
    return 0;
}