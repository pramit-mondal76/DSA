#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// hoare pertition left---
int pertition1(int arr[], int low, int high)
{
    int i = low;
    int j = high + 1;
    int pivot = arr[low];
    while (i < j)
    {
        do
        {
            i++;
        } while (i <= j and arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
        {
            swap(arr, i, j);
        }
    }
    swap(arr, low, j);
    return j;
}
// lomuto pertition right---
int pertition2(int arr[], int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low; j < high; j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    i = i + 1;
    swap(arr, i, high);
    return i;
}
void quicksort1(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = pertition1(arr, l, r);
        quicksort1(arr, l, pi - 1);
        quicksort1(arr, pi + 1, r);
    }
}
void quicksort2(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = pertition2(arr, l, r);
        quicksort2(arr, l, pi - 1);
        quicksort2(arr, pi + 1, r);
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
    int arr[100];
    int n;
    cout << "Enter no of element: ";
    cin >> n;
    int s;
    cout << "elements are:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 0)
    {
        cout << "Error.";
    }
    else if (n == 1)
    {
        cout << "Already sorted.";
    }
    else
    {
        while (1)
        {
            cout << "\n1.hoare left pertition\n2.lomuto right pertition\n3.exit";
            cout << "\nselect any pertition: ";
            cin >> s;
            switch (s)
            {
            case 1:
                quicksort1(arr, 0, n - 1);
                break;

            case 2:
                quicksort2(arr, 0, n - 1);
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid";
            }
            printArray(arr, n);
        }
    }

    return 0;
}