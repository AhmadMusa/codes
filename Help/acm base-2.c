#include<stdio.h>
int main()
{
    long long test;
    scanf("%lld",&test);
    while(test--)
    {
        double n;
        scanf("%lf",&n);
        double cou=-1, rem[1000];
        while(n!=0)
        {
            rem[++cou]=n%(-2);
            n=n/(-2);
            printf("%lld ",n);
        }
        long long int i;
        for(i=cou-1;i>=0;i--)
            //printf("%lld",rem[i]);
        printf("\n");
    }

}
