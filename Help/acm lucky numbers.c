#include <stdio.h>
#include <math.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
    long long n,x,k=1;
    scanf("%lld",&n);
    printf("Case %d:",i);
    k=sqrt(n);
    while((k*k)>=1)
    {
        x=n-(k*k);
        if(x>k && x%(k)==0)
        {
            printf(" %lld",x);
        }
        k--;
    }
        printf("\n");
        i++;
    }
}
