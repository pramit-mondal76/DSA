#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
    return (a>b)?a : b;
}
int knapsack(int w,int wt[],int val[],int n)
{
    if (n ==0 || w ==0) return 0;
    if(wt[n-1]>w) return knapsack(w,wt,val,n-1);
    //if weight of nth element is more than knapsack capacity weight (w) then that item can't be include...
    else{
        return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
    }
}
int main()
{
    int val[]={0,1,2,5,6};
    int wt[]={0,2,3,4,5};
    int w=9;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<"max value is:"<<knapsack(w,wt,val,n);
    return 0;
}