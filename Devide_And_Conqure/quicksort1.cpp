// Lumonto algorithm---
#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int pertition(int arr[], int l, int h)
{
    int i = l - 1;
    int pi = arr[h];
    for (int j = l; j < h; j++)
    {
        if (arr[j] < pi)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, h);
    return i + 1;
}
void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivot = pertition(arr, l, h);
        quicksort(arr, l, pivot - 1);
        quicksort(arr, pivot + 1, h);
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}