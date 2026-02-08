#include<stdio.h>
#include<iostream>
using namespace std;

bool isPalindrome(string &str,int i, int n)
{
if(i>=n)
{
    return true;
}

return (str[i] ==str[n]) && isPalindrome(str,i+1,n-1)
}

int main()
{
    string str="aabbcbbaa"

    bool ans = isPalindrome(str, str.length()-1);
}