#include <stdio.h>
long int save[10001];
long int digit(long long n);
int main()
{
    long long i;
    for(i=1; i<=1000; i++)
    {
        save[i]=digit(i);
    }
    long long m ,n , sum=0;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        sum=0;
        if(m==0 && n==0 )
            break;
        long long i,temp;
        for(i=m; i<=n; i++)
        {
            temp=i;
            if(temp<=1000)
                sum+=save[temp];
            else if(temp<=1000000)
                sum+=save[temp/1000] + save[temp%1000];
            else if(temp<=1000000000)
                sum+=save[(temp/1000)%1000]+save[(temp/1000)/1000]+save[temp%1000];
            //printf("{%d}",sum);
        }
        printf("%lld\n",sum);
    }
}

long int digit(long long n)
{
    int sum=0,i;
    char s[100];
    sprintf(s,"%lld",n);
    i=0;
    while(i<strlen(s))
    {
        sum+=s[i]-'0';
        i++;
    }

    return sum;
}
