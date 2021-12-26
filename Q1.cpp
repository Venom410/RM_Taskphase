#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number of letters of the word:";
    cin>>x;
    char str[x+1];
    cout<<"Enter the word:";
    cin>>str;

    for(int i=0; i<x-1; i++)
    {
        for(int j=0; j<x-1; j++)
        {
            if(str[j]>str[j+1])
            {
                char t;
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
    cout<<"The sorted word is "<<str;
    return 0;
}