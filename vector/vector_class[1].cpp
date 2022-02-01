#include <iostream>
using namespace std;
template<typename T>
class vector
{
   // data Menbers
   T *arr;
   T cs;
   T ms;

public:
   vector(int max_size=1)
   {

      cs = 0;
      ms = max_size;
      arr = new T[ms];
   }

   void push_back(int d)
   {
      if (cs == ms)
      {
         T *oldarr = arr;
         ms = 2 * ms;
         arr = new T[ms];
         for (int i = 0; i < cs; i++)
         {
            arr[i] == oldarr[i];
         }
         delete[] oldarr;
      }
      arr[cs] = d;
      cs++;
   }
   void pop_back()
   {
      if(cs>=0)
      {

       cs--;
      }
      
   }
   bool isEmpty()
   {
      return cs=0;
   }
   T front()
   {
      return arr[0];
   }
   T back()
   {
      return arr[cs-1];
   }
   T at(int i)
   {
        return arr[i];
   }
   T size(){
      return cs;

   }
   T capacity()
   {
      return ms;
   }
   
};

int main()
{
   vector<int>v(5);
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);

   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   v.push_back(7);
   v.pop_back();
   cout<<v.front()<<endl;
   cout<<v.back()<<endl;
   cout<<v.size()<<endl;
   cout<<v.capacity();
  

   return 0;
}