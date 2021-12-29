#include<iostream>
using namespace std;

int BSR(int arr[], int num, int first, int last)
{
    if(first>last){
        return -1;
    }
    int mid=first+last/2;
    if(arr[mid]==num){
        return mid;
    }
    else if(mid>num)
    {
        return BSR(arr,num,first,mid-1);
    }
    else{
        return BSR(arr,num,mid+1,last);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int list[n];
    cout<<"Enter the elements of array";
    for(int i=0; i<n; i++)
    {
        cin>>list[i];
    }
    cout<<"Enter the element to be searched";
    int bin;
    cin>>bin;
    int bfind=BSR(list, bin, 0, n-1);
    if(bfind==-1)
    {
        cout<<"Number is not in the list";
    }
    else
    {
        cout<<"Index of the number is "<<bfind;
    }
}