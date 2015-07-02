#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n, k;

    while(cin>>n>>k)
    {
        int t;
        if(n%2==0)
        {
            t=n/2;
        }
        else
            t=n/2+1;
        if(k<=t)
           cout<<2*k-1;
        else
            cout<<2*(k-t);

    }
    return 0;
}
