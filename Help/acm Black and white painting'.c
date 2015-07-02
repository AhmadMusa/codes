#include <stdio.h>
#include <math.h>
int main()
{
    long int n, m, c;
    while(scanf("%ld %ld %ld",&n,&m,&c)==3)
    {
        if(n==0 && m==0 &&c==0)
            return 0;

        long int a , b, sum=0;
        n=n-8+1;
        m=m-8+1;

        if(c==1)
        {
            a=(n/2);
            b=(m/2);
            if(n%2)
                ++a;
            if(m%2)
                ++b;

            sum+=a*b;

            a=(n/2);
            b=(m/2);
            sum+=a*b;
        }
        else
        {
            a=(n/2);
            b=(m/2);
            if(n%2)
                ++a;
            sum+=a*b;

            a=(n/2);

            b=(m/2);
            if(m%2)
                ++b;
            sum+=a*b;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
