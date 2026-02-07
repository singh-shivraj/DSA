#include<stdio.h>
#include<iostream>
using namespace std;
#include<vector>

/*optimized solution*/

int main()
{
    int count = 10;

    vector<bool> isPrime(count+1,true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (size_t i = 0; i < count; i++)
    {
        if (isPrime[i])
        {   
            cout<<i<<" ";
            for (size_t j = i*i; j <= count; j = i+j)
            {
                isPrime[j] = false;
            }
        }
    }
}


/*naive solutionx
int main()
{
    int n = 10;
    vector<bool> ans(n+1,true);
    ans[0] =false;
    ans[1] =false;

    for (size_t i=2; i*i < n; i++)
    {
        if(ans[i])
        {
            for (size_t j = i*2; j <= n; j=j+i)
            {
                ans[j] = false;
            }
            
        }
    }
    cout<<"\nPrime number is\n";
    for (size_t i = 2; i < n; i++)
    {
        if (ans[i])
        {
            std::cout<<i << " ";
        }
        
    }
    
    return 0;
}

*/