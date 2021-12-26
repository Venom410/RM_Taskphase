#include<iostream>
using namespace std;

int sum(long long int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return ((num%10)+sum(num/10));
    }
}

int main()
{
    long long int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The sum of digits is "<<sum(n);
}