#include<stdio.h>
#include<iostream>
using namespace std;

int jose(int n, int k)
{
    if(n==1) return 0;

    return (jose(n-1,k)+k)%n;
}

//if circle starts from 1 then call me
int getAns(int n,int k) 
{
    return jose(n,k)+1;
}

int main()
{
    int n=5;
    int k=3;

    cout<<"\nanswer::"<<jose(n,k);
}