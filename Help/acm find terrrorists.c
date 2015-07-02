#include <stdio.h>
int main()
{
    long test;
    scanf("%ld",&test);
    while(test--)
    {
        int flag=0;
        long int l , i, h , term ;
        scanf("%ld %ld",&l,&h);
        if(l>h)
        {
            long t= l;
            l=h;
            h=t;
        }
        for(i=l; i<=h; i++)
        {
            term=factor(i);
            //if(i==27)
            //printf("{%d}\n",term);
            if(1==prime(term))
            {
                printf("%d ",i);
                flag=1;
            }
        }
        if(i==h+1 && flag==0)
        {
            printf("-1");
        }
        printf("\n");

    }
}

int factor (long n)
{
    int prime(long int n);
    long int i, s=n;
    int term=0;
    for(i=2; n!=1;)
    {
        if(n%i==0)
        {
            n/=i;
            term++;
        }
        else
        {
            i++;
        }
    }
    if(prime(s)==1)
        return term+1;

    else if(prime(s)==0)
    {
        if(s==1)
            return term+1;
        else
            return term+2;
    }
}

int prime(long int n)
{
    if(n<2)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==0)
        return 0;

    long int i;

    for(i=3;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
