
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n=5;

     
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (size_t j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        if(i>=1)
        {
            for (size_t j = 0; j<=i-1; j++)
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
   


    for(int i=0;i<n;i++)
    {
        if (i>=1)
        {
            for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
        }
        for(int k=0;k<n-i;k++)
        {
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++)
        {
            cout<<"*";
        }

        cout<<"\n";

    }

}