// hoare algorithm---
#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int pertition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l - 1;
    int j = r + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr, i, j);
    }
}
void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = pertition(arr, l, r);
        quicksort(arr, l, pi);
        quicksort(arr, pi + 1, r);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "sorted array: ";
    printArray(arr, n);
    return 0;
    
}