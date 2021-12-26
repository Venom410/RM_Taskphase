#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the total digits of the number:";
    cin>>n;
    char num[n+1];
    cout<<"Enter the number:";
    cin>>num;
    int asc=0;
    int des=0;
    int max=0;
    int equal=0;
    while(max<1)
    {
        for(int i=0; i<n-1; i++)
        {
            if(num[i]<num[i+1])
            {
                asc+=1;
            }
            else if(num[i]==num[i+1])
            {
                equal+=1;
            }
            else{
                max+=1;
                break;
            }
        }
    }
    for(int i=asc; i<n-1; i++)
    {
        if(num[i]<num[i+1])
        {
            cout<<i;
            max+=1;
            break;
        }
        else if(num[i]==num[i+1])
        {
            equal+=1;
        }
        else
        {
            des+=1;
        }
    }
    if(des>0 && asc>0 && equal==0 && max==1)
    {
        cout<<"The given number is a hill number";
    }
    else{
        cout<<"The given number is not a hill number";
    }
}