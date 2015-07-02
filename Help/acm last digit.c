#include <stdio.h>
int main()
{
    unsigned long long int n;
    while(scanf("%llu",&n)==1)
    {
        unsigned long long sum=0,i;
        for(i=1;i<=n;i++)
        {
            sum+=pow(i,i);
        }
        printf("{%llu}\n",sum);
    }
}
