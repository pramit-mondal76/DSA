#include<iostream>
using namespace std;
void towers(int n,char src,char dest,char aux)
{
    if(n==1)
    {
        cout<<"Move the disk 1 "<<src<<" to "<<dest<<endl;
    }
    else
    {
        towers(n-1,src,aux,dest);
        cout<<"Move the disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        towers(n-1,aux,dest,src);
    }
}
int main(){
    int n;
    cout<<"enter any no. :";
    cin>>n;
    towers(n,'A','B','C');
    return 0;
}