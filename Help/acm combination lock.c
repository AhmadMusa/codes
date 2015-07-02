#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        int temp,sum;
        sum=1080;

        temp=(a-b);
        if(temp<0)
            temp=temp+40;
        sum=sum+(9*temp);

        temp=(c-b);
        if(temp<0)
            temp=temp + 40;
        sum=sum+(9*temp);

        temp=(c-d);
        if(temp<0)
            temp=temp + 40;
        sum=sum+(9*temp);

        printf("%d\n",sum);
    }
    return 0;
}
