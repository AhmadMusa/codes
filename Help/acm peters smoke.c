#include <stdio.h>
int main()
{
    long long a,b, n=0, temp;
    while(scanf("%llu %llu",&a,&b)!=EOF)
    {
    if(a==0 && b==0)
        printf("0\n");
    else
    {
    n=a;
    while(a>=b)
    {
        temp=a/b;
        n= n + temp;
        a=temp + (a%b);
    }
    printf("%llu\n",n);
    }
    }
    return 0;
}
