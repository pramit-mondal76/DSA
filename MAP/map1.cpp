//map is used to store key value pairs.
//map is an associative array 
#include<iostream>
#include <map>
#include<string>
using namespace std;
int main()
{
    map<string,int>marksmap;
    marksmap["pramit"]=45;
    marksmap["rimo"]=35;
    marksmap["rohit"]=25;
    marksmap.insert({{"ram",24},{"sam",23}});//we can insert key value using .insert()
    map<string,int> :: iterator iter;
    for(iter=marksmap.begin();iter !=marksmap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;

    }
    cout<<"The size is:"<<marksmap.size()<<endl;//.size() is used to know about the size of the map
    cout<<"Max size is:"<<marksmap.max_size()<<endl;//.max-size() is used to know the maximum size of the map
    cout<<"Empty's retrun value is:"<<marksmap.empty()<<endl;//.empty() is used to the empty value
    
    return 0;
}
