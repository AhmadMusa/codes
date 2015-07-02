#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, x,i,b ,sum=0;
    while(scanf("%lld %lld",&a,&b)==2 )
    {
        if(a<1 && b<0)
        {
            break;
        }
        for(i=1;i<=a;i++)
            {
                x=pow(b,i);
                sum=sum+ i * x;
            }
            printf("%lld\n",sum);
            sum=0;
    }
    return 0;
}
