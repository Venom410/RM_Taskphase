#include<iostream>
using namespace std;

void copy(char *c, char *p)
{
    while(*c!='\0')
    {
        *p=*c;
        c++;
        p++;
    }
    *p='\0';
}


int main()
{
    int n;
    cout<<"Enter the number of letters in the string:";
    cin>>n;
    n+=1;
    char c[n];
    char p[n];
    cout<<"Enter the word here:";
    cin>>c;
    copy(c, p);
    cout<<p;
    
}