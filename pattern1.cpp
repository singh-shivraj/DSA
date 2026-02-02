#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int count;
std::cout<<"enter the pattern, you want to print:";
std::cin>>count;

for (size_t i = 0; i < count; i++)
{
    for (size_t j = 0; j < count; j++)
    {
        cout<<"*";
    }
    cout<<"\n";
}


}