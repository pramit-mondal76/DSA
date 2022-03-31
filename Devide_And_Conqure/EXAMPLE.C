#include <stdio.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partitioning(int arr[], int low, int high)
{
    int mid, pivot, i, j;
    i = low - 1;
    j = high + 1;
    mid = (low + high) / 2;
    pivot = arr[mid];
    while (i < j)
    {

        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (j >= 0 && arr[j] > pivot);
        if (i < j)
        {
            swap(arr, i, j);
        }
    } 
    swap(arr, mid, j);
    return j;
}
/*int partitioning(int arr[],int low,int high)
{
    int pivot,i,j,c;
    pivot=arr[high];
    i=low-1;
    j=high;
    while(i<j)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>=pivot)
        {
            j--;
        }
        if(i<j)
        {
            c=arr[i];
            arr[j]=arr[i];
            arr[i]=arr[j];
        }
    }
    c=arr[high];
    arr[high]=arr[i];
    arr[i]=c;
    return i;
}
/*int partitioning(int arr[],int low,int high)
{
    int pivot,start,end,c;
    start=low;
    end=high;
    pivot=arr[low];
    while (start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            c=arr[start];
            arr[start]=arr[end];
            arr[end]=c;
        }
    }
    c=arr[low];
    arr[low]=arr[end];
    arr[end]=c;
    return end;

}*/
int quicksort(int arr[], int low, int high)
{

    if (low < high)
    {
        int j = partitioning(arr, low, high);
        quicksort(arr, low, j - 1);
        quicksort(arr, j + 1, high);
    }
}
int main()
{
    int arr[10], n, i, low, high;
    printf("\nenter the size of the array ");
    scanf("%d", &n);
    printf("\nenter the array element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    low = 0;
    high = n - 1;
    quicksort(arr, low, high);
    printf("\nthe sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}