//vector is a sequence container or it is a data structure representing arrays than can change in size.
//stl-strandard template libreary in c++
#include<iostream>
#include<vector>
using namespace std;


int main(){
    //demo vector.
    //vector<int>arr={1,5,6,5,8,9};
    //push back means push an element in the back  positiion of the arry; 
    //fill constructor
    vector<int>a(4,7);
    a.push_back(3);
    a.push_back(4);
    a.push_back(8);

    //pop back means delete the last element of the array.
    a.pop_back();
    //process to print elements of the vector.
    /*for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }*/
    for(int x:a)
    {
        cout<<x<<" ,";
    }
    //size of the vector(no of element )
    //cout<<arr.size()<<endl;
    //capaity of the vecctor.
    //cout<<arr.capacity()<<endl;

    return 0;
}