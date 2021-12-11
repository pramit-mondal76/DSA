#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>a={
        {1,2,3},
        {4,5,6},
        {7,8,9,10},
        {11,12}};
    for(int i=0;i<a.size();i++)
    {
        for(int x : a[i])
        {
            cout<<x<<",";
        }
    }    
    return 0;
}