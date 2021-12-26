#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows for the first matrix:";
    cin>>r1;
    cout<<"Enter the number of columns for the first matrix:";
    cin>>c1;
    cout<<"Enter the number of rows for the second matrix:";
    cin>>r2;
    cout<<"Enter the number of columns for the second matrix:";
    cin>>c2;
    if(c1!=r2)
    {
        cout<<"This matrix multiplication cannnot be performed";
    }
    else{
        int m1[r1][c1];
        int m2[r2][c2];
        cout<<"Enter the elements for the first matrix:"<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                cout<<"Enter the element for row "<<i+1<<" column "<<j+1<<":";
                cin>>m1[i][j];
            }    
        }
        cout<<"Enter the elements for the second matrix:"<<endl;
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<"Enter the element for row "<<i+1<<" column "<<j+1<<":";
                cin>>m2[i][j];
            }    
        }
        int pro[r1][c2];
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                pro[i][j]=0;
                for (int k=0;k<c1;k++)
                {
                    pro[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        cout<<"The product of the two matrices are:"<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<pro[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}