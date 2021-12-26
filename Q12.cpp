
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
    int f=factorial(n-1)*n;
    return f;
    }
}

int main()
{
    cout<<"Enter the number:";
    int n;
    cin>>n;
    cout<<"Factorial of the number is :"<<factorial(n);
}