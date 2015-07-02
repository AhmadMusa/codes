#include <stdio.h>
int main()
{
    freopen("simple.txt","r",stdin);
    freopen("simpleoutput.txt","w",stdout);
    long long int i, n, a,b,sum=0,j, temp;

    while(scanf("%llu %llu",&a,&b)==2)
    {
        if(a<0 && b<0)
            break;

        for(i=a;i<=b;i++)
        {
             j=i;
             if(j%10>0)
                j=j%10;
             else if(j==0)
                j=0;
             else
                j=j/10;
             sum=sum+j;
        }

        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
