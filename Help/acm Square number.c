#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b, j,i;
    while(scanf("%llu %llu",&a,&b)==2)
    {
        long long int count=0;
        if(a==0 && b==0)
            break;
        for(i=a;i<=b;i++)
        {
            j=sqrt(i);
            if(j*j==i)
                count++;
        }
        printf("%llu\n",count);

    }

    return 0;
}
