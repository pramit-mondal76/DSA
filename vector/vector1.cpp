#include<iostream>
#include<vector>
using namespace std;


int main(){
    //demo vector.
    vector<int>arr={1,5,6,5,8,9};
    //push back means push an element in the back  positiion of the arry; 
    arr.push_back(3);
    //pop back means delete the last element of the array.
    arr.pop_back();
    //process to print elements of the vector.
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    //size of the vector(no of element )
    //cout<<arr.size()<<endl;
    //capaity of the vecctor.
    //cout<<arr.capacity()<<endl;

    return 0;
}