#include <iostream>
using namespace std;
void count_sort(int array[], int size)
{
    int output[10];

  int max = array[0];
  for (int i = 1; i < size; i++)
  {
    if (array[i] > max)
      max = array[i];
  }

  int count[10];

  for (int i = 0; i <= max; ++i)
  {
    count[i] = 0;
  }
  for (int i = 0; i < size; i++)
  {
    count[array[i]]++;
  }
  for (int i = 1; i <= max; i++)
  {
    count[i] += count[i - 1];
  }
  for (int i = size - 1; i >= 0; i--)
  {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++)
  {
    array[i] = output[i];
  }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{

 int arr[10], n, i;
  cout<<"NO of element:";
  cin>>n;
  cout<<"\nenter the elements:";
  for (i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"\nBefore sorting:";
  printarray(arr, n);
  count_sort(arr, n);
  cout<<"\n after sorting:";
  printarray(arr, n);

    return 0;
}