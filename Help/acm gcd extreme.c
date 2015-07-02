#include <stdio.h>
int main()
{
    long long int  N;
    double G;
    long long int i,j;
    while(scanf("%lld",&N)==1)
    {
        if(N==0)
            break;
        G=0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                G+=gcd(i,j);
            }
        }
        printf("%.0lf\n",G);
    }
    return 0;
}

int gcd(long long int m, long long int n)
{
    if(m == n)
        return m;
    else if(m%n==0)
        return n;
    else if(n%m==0)
        return m;
    else if (m > n)
        return gcd(m-n, n);
    else
        return gcd(m, n-m);
}
