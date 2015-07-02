#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long long int arr[100000+2];
void s(long long int*p, long long int i)
{
    *p=i;
    long long int r=0;
    while(i)
    {
        r += (i%10);
        i=i/10;
    }
    *p= *p+r;
}
int main()
{
    long long int n , i;
    for(i=1; i<=100000; i++)
    {
        long long int sum;
        s(&sum, i);

        if(arr[sum]==0)
            arr[sum]=i;
    }

    long long int t ;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
            printf("%lld\n",arr[n]);
    }
}

