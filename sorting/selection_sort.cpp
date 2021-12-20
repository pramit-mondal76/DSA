// repetedly find the minimum element from unsorted part and putting it at the begging.
#include <iostream>

using namespace std;
void selection_sort(int arr[], int n)
{

    for (int pos = 0; pos <= n - 1; pos++)
    {
        int curr = arr[pos];
        int min_pos = pos;
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[min_pos], arr[pos]);
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "," ;
    }
    cout<<endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; // create an array with given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    selection_sort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);
    return 0;
}
