#include<stdio.h>
int main()
{
    long long int num,n,a[1500],m,p,i,number=0,man;
    while(scanf("%lld",&num))
    {
        if(num==0)
            break;
        if(num<0)
            man=-1*num;
        else
            man=num;
        n=0;
        for(i=2; i<=man;)
        {
            if(man%i==0)
            {
                man=man/i;
                a[n]=i;
                n++;
            }
            else if(man%i!=0)
            {
                i++;
            }
        }
        if(num<0)
            printf("%lld = -1 x ",num);
        else
            printf("%lld = ",num);
        for(i=0; i<n; i++)
        {
            if(i==n-1)
                printf("%lld",a[i]);
            else
                printf("%lld x ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
