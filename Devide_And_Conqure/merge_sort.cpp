#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int len1=mid-start+1;
    int len2=end-mid;
    int la[len1],ra[len2];
    for(int i=0;i<len1;i++)
    {
        la[i]=arr[start+i];
    }
    for(int j=0;j<len2;j++)
    {
        ra[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=start;
    while(i<len1 and j<len2)
    {
        if(la[i]<=ra[j])
        {
            arr[k]=la[i];
            i++;
        }
        else
        {
            arr[k]=ra[j];
            j++;
        }
        k++;
    }
    while(i<len1)
    {
        arr[k]=la[i];
        i++;
        k++;
    }
    while(j<len2)
    {
        arr[k]=ra[j];
        j++;
        k++;
    }
    

}
void Mergesort(int arr[],int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        Mergesort(arr,s,mid);
        Mergesort(arr,mid+1,e);
        
        merge(arr,s,mid,e);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    
    Mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    return 0;
}