#include<iostream>
using namespace std;
//time complexity is O(n);...it is best possible sol to get the max value of sum of an subarray.
int max_subarray_sum(int a[],int n)
{
    int cs=0;
    int largest=0;
    for(int i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        largest=max(largest,cs);
    }
    return largest;
}

int main(){
    int a[]={-1,-2,-3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<max_subarray_sum(a,n)<<endl;
    
    
    return 0;
}