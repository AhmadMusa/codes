#include <stdio.h>
long long int dp[10005];

int main()
{
    long long int n, caseno = 0, cases;
    scanf("%d", &cases);
    long long int i,a,b,c,d,e,f;

    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);


        dp[0]=a;
        dp[1]=b;
        dp[2]=c;
        dp[3]=d;
        dp[4]=e;
        dp[5]=f;
        for( i=6;i<=n;i++)
          dp[i]=(dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6])% 10000007;

        printf("Case %lld: %lld\n", ++caseno, dp[n]% 10000007);
    }
    return 0;
}
