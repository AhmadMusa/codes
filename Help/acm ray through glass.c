#include<stdio.h>
int main()
{
    double a,b,fib;
    a=0;b=1;
    int i;
    double n;
    scanf("%lf",&n);
    for(i=0;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("%.0lf",fib);
}
