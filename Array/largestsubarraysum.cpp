//brute forece approach.
//time complexity is O(N^3)

#include<iostream>
using namespace std;
int printsubarraysum(int a[],int n)
{
    int largest_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraysum=0;
            for(int k=i;k<=j;k++ )
            {
              subarraysum +=a[k];  
            }
            //put a check is subarraysum>largestsum.
            largest_sum=max(largest_sum,subarraysum);
        }
    }
    return largest_sum;
}

int main(){
    int a[]={-1,-2,-3,4,5};
    int n=sizeof(a)/sizeof(int );
    cout<<printsubarraysum(a,n);
    
    return 0;
}