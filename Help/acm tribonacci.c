#include <stdio.h>
int main()
{
    double num,a,b,c;
    int i;
    int n;
    while(scanf("%d",&n)==1)
    {
        a=0,b=1,c=2;
        for(i=4;i<=n;i++)
        {
            num=a+b+c;
            a=b;
            b=c;
            c=num;
        }
        printf("%lf\n",num);
        }
}
