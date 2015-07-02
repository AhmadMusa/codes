#include <stdio.h>
int main()
{
    long long int n,s;
    while(scanf("%lld",&n)==1){
    s=n;
    long long temp=0;
    while(n!=0)
    {
        temp=temp*10 + (n%10);
        n=n/10;
    }
    if(prime(s)==0)
        printf("%lld is not prime.\n",s);
    else
    {
        if(prime(temp)==1 && temp!=s)
            printf("%lld is emirp.\n",s);
        else
            printf("%lld is prime.\n",s);
    }
    }
    return 0;
}

int prime(long long n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    int i;
    for(i=3;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

