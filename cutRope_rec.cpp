#include<stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;

int getRole(int n,int a, int b,int c)
{
    if(n==0) return 0;
    if(n <0) return -1;

    int ans = max({getRole(n-a,a,b,c),getRole(n-b,a,b,c),getRole(n-c,a,b,c)});
    if (ans==-1) return -1;
    return ans+1;
         
    
}

int main()
{
    int n=5;
    int a=2;
    int b=5;
    int c=1;  //op:5
    int ans =getRole(n,a,b,c);
    cout<<"\nans::"<<ans;
}