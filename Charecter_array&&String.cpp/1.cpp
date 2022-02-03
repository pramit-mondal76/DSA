#include<iostream>
using namespace std;

int main(){
    char word[1000];
    cin.getline(word,1000);
    int x=0,y=0;
    for(int i=0;word[i]!='\0';i++)
    {
       switch (word[i])
       {
       case 'N':y++;
           break;
        case 'S':y--;
           break;
        case 'E':x++;
           break;
        case 'W':x--;
           break;      
       
        
       } 
    }
    cout<<"Final x and y is: "<<x<<" ,"<<y<<endl;
    if(x>=0 and y>=0)
    {
        while(y--)
        {
            cout<<"N";
        }
        while(x--)
        {
            cout<<"E";
        }
    }
    return 0;
}