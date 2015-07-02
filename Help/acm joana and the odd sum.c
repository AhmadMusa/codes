#include <stdio.h>
int main()
{
    long long int i ,n , k, j, a;

    while(scanf("%lld",&n)==1)
    {
        a=n/2;
        j=(a+1)*n + a;
        k=(j)+(j-2)+(j-4);
        printf("%lld\n",k);
    }
return 0;
}
