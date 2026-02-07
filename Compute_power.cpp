#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    //x^y
    int x = 3;
    int y = 5;
    int ans=1;
    int temp = x;

    while (y>0)
    {
        if (y%2 !=0)
        {
            ans = ans * temp;
        }
        temp *=temp;
        y=y/2;
    }
    
        cout<<"\nans::"<<ans <<"\n";
    
}