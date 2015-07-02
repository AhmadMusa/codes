#include <stdio.h>
int main()
{
    long long int n1,n2, t=0, i=0, a=0,j, s=0,count=0,temp=0;

    while(scanf("%lld %lld",&n1,&n2)==2)
    {

        for(i=n1;i<=n2;i++)
        {
        count=0;
        j=i;
        if(j<10)
            {
                s=j*j;
                count++;
            }
        else
        {
            s=j;
            count++;
        }
        while(s>=10)
        {
            a=s;
            t=0;
            while(a!=0)
            {
                temp=a%10;
                t=t+(temp*temp);
                a=a/10;

            }
            count++;
            s=t;
        }

        if(s==1 && i<10)
        {
            if(i==1)
                printf("%lld %lld\n",j,count);
            else
                printf("%lld %lld\n",j,count+1);
        }
        else if(s==1 && i>=10)
            printf("%lld %lld\n",j,count);

    }
    printf("\n");
    }
    return 0;
}
