#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    //freopen("too.txt","r",stdin);
    long long int n, k;
    while(cin>>n>>k)
    {
        unsigned long long int t;
        if(n%2==0)
        {
            t=n/2;
        }
        else
            t=n/2+1;
        if(k<=t)
        {
            t=2*k;
            cout<<t-1<<"\n";
        }
        else
        {
            t=k-t;
            cout<<2*t<<"\n";
        }

    }
    return 0;
}

