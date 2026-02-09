#include<stdio.h>
#include<iostream>
using namespace std;

//time complexity :O(2^n)
int countSubsetSum(int sum ,int n,int arr[])
{
    if(n==0)
    {
        if (sum==0)
        {
            return 1;
        }
        else
            return 0;
    } 
        
    return countSubsetSum(sum,n-1,arr) + countSubsetSum(sum - arr[n-1],n-1,arr);
}

int main()
{
    int arr[]={10,20,15};
    int sum=25;
    int n=3;
    cout<<"ans::"<<countSubsetSum(sum,n,arr);

}