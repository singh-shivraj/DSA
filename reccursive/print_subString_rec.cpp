#include<stdio.h>
#include<iostream>
using namespace std;

void printSubstr(string str , string curr ="", int i=0)
{
    if (i==str.length())
    {
        cout<<curr <<" ";
        return;
    }
    printSubstr(str,curr,i+1);
    printSubstr(str,curr+str[i],i+1);
    
}

int main()
{
    string str= "ABC";
    printSubstr(str);

}
