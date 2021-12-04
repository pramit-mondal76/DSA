#include<iostream>
using namespace std;
int binarysearch(int arr[],int p,int r,int key)
{
    if(p<=r)
    {
        int mid=(p+r)/2;
        if(arr[mid]==key)
        {
          return mid;
        }
        if(arr[mid]>key)
        {
            return binarysearch(arr,p,mid-1,key);
        }
        if(arr[mid]<key)
        {
            return binarysearch(arr,mid+1,r,key);
        }
    }
   return -1;


}
int main(void){
    int a[]={1,4,3,2,7,6,8,9};
    int n=sizeof(a)/sizeof(int );
    int key;
    cout<<"Enter any key value -";
    cin>>key;
    int index=binarysearch(a,0,n-1,key);
    if(index == -1){
      cout<< key <<" is not present in the array";
   }
   else{
      cout<< key <<" is present at index "<< index <<" in the array";
   }
    
    return 0;

}