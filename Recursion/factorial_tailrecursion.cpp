// factorial of a number using tail recursion-A recursive function is tail recursive when a recursive call is the last thing executed by the function
#include <iostream>
using namespace std;
int factorial(int n,int a)
{
    if (n == 0)
    {
        return a;
    }
    else
    {
        return factorial(n-1,a*n);
    }
}
int main()
{
    int n,a=1;
    cout<<"enter any number:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is :"<<factorial(n,a);
    return 0;
}