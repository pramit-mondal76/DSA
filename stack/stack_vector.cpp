#include <iostream>
#include <vector>

using namespace std;
/*template<typename T>
class stack{
    vector<T>arr;
    public:
      void push(T data)
      {
          arr.push_back(data);
      }
      void pop()
      {
          arr.pop_back();

      }
      T top()
      {
          int lastIdx=arr.size()-1;
          return arr[lastIdx];
      }
      bool empty()
      {
          return arr.size()==0;
      }
};*/
template <typename T>
class stack
{
    int top = -1;
    vector<T> arr;

public:
    void push(T data)
    {
        arr.push_back(data);
        top++;
    }
    void pop()
    {
        arr.pop_back();
        top--;
    }
    T peek()
    {
        return arr[top];
    }
    void empty()
    {
        if (arr.size() == 0) cout << "true"<<endl;
        cout << "false" <<endl;
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            for (int i = top; i >=0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    s.display();
    // cout<<s.peek()<<endl;
    // s.empty();
    s.pop();
    s.pop();
    s.pop();

    s.display();
    


    return 0;
}