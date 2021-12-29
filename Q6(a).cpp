#include<iostream>
using namespace std;
int amicable(int n)
{
    int s=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    return s;
}
int main()
{
    int n1,n2;
    cout<<"Enter 2 numbers:";
    cin>>n1>>n2;
    int s1=amicable(n1);
    int s2=amicable(n2);
    if(s2==n1&&s1==n2)
    {
        cout<<"The numbers are amicable numbers";
    }
    else{
        cout<<"The numbers are not amicable numbers";
    }
}