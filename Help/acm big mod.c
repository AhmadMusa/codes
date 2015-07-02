#include <stdio.h>
int main()
{
    long long base, power, mod;
    while(scanf("%lld %lld %lld",&base,&power,&mod)==3)
    {
        if(base==1 && power==0 )
        {
            if(mod==1)
                printf("0\n");
            else
                printf("1\n");
        }
        else if(base==0 && power==0)
        {
            printf("0\n");
        }
        else
            printf("%d\n",big_mod(base,power,mod));
    }

    return 0;
}



int big_mod(long long int base,long long  int power,long long int mod)
{
    if(power==0)    return 1;

    else if(power%2==1)
    {
        int p1 = base % mod;
        int p2 = (big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0)
    {
        int p1 = (big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
