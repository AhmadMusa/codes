#include <stdio.h>
long long int n,i,j,k,l,p,h,testcase,max,answer;
long int divisorcount(long int n)
{
    int s,count=0;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
            count+=2;
        s=i;
        if(s*s==n)
            count--;

    }
    return count;
}

int main()
{

    while(scanf("%lld",&testcase)!=EOF)
    {
        while(testcase--)
        {
            scanf("%lld %lld",&l,&h);
            max=divisorcount(l);
            answer=l;
            for(j=l+1; j<=h; j++)
            {
                k=divisorcount(j);
                if(k>max)
                {
                    max=k;
                    answer=j;
                }
            }
            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,answer,max);
        }

    }
    return 0;
}
