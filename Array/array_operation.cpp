/*Write a menu driven program to perform the following operations on an array.
(a) update an element x at position k in the array.
(b) insert an element x at position k in the array.
(c) search an element x from the array.
(d) remove an element x from the array.
(e) display an element x from the array.*/
#include <iostream>
using namespace std;
void insert(int *arr, int n)
{
    int k, item;
    cout << "Enter the position: ";
    cin >> k;
    cout << "Enter the item: ";
    cin >> item;
    n = n + 1;
    for (int i = n; i >= k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = item;
}
void remove(int *arr, int n)
{
    int k;
    cout << "Enter the position: ";
    cin >> k;
    for (int j = k; j <= n - 1; j++)
    {
        arr[j - 1] = arr[j];
    }
    n = n - 1;
   
}
void search(int *arr, int n)
{
    int item, c = 0;
    cout << "Enter the item: ";
    cin >> item;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            cout << "Item found at position" << i << endl;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "item not found." << endl;
    }
}
void update(int *arr)
{
    int k, item;
    cout << "Enter the position: ";
    cin >> k;
    cout << "Enter the item: ";
    cin >> item;
    arr[k - 1] = item;
}
void display(int *arr, int n)
{
    cout << "Elemenets are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int n=5 ;
    int ch;

    while (1)
    {
        cout << "\n1.insert\n2.remove\n3.search\n4.update\n5.dsplay\n6.exit\n";

        cout << "enter any choice:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert(arr, n);
            break;

        case 2:
            remove(arr, n);

            break;

        case 3:
            search(arr, n);

            break;

        case 4:

            update(arr);

        case 5:
            display(arr, n);
            break;

        default:
            exit(1);
        }
    }
    return 0;
}