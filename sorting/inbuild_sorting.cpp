#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b) // controls how we should do comparison
{
    //cout<<"comparing"<<a <<"and "<<b<<endl;
    return a > b; // a<b
}
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++) // do repeted swapping
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {-12, -1, -9, 1, 9, 3, 7, 5};
    int n = sizeof(arr) / sizeof(int);
    // sort(arr,arr+n,compare);//compare is not a function call,passing a function as parameter to another function.
    //sort(arr,arr+n,greater<int>());//in place of compare greater is used.
    // reverse(arr,arr+n);//print array in decending order.
    bubble_sort(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}