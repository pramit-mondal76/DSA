#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end) {

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int leftArr[len1], rightArr[len2];

  for (int i = 0; i < len1; i++)
  {
    leftArr[i] = arr[start + i];
  }
  for (int j = 0; j < len2; j++)
  {
    rightArr[j] = arr[mid + 1 + j];
  }

  int i, j, k;
  i = 0;
  j = 0;
  k = start;

  while (i < len1 && j < len2) {
    if (leftArr[i] <= rightArr[j])
     {
      arr[k] = leftArr[i];
      i++;
    } 
    else 
    {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  while (i < len1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < len2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}


void mergesort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    
    mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}