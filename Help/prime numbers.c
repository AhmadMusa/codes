#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i, root;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    root=sqrt(n);
    for(i=3;i<=root;i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int m,s,n,a,b,t=0,count=0;
    double d;
    while(1)
    {
        scanf("%d %d",&a,&b);
        for(m=a;m<=b;m++)
        {
        s= m*m + m + 41;
        t++;
        int prime(int n);
        if(1==prime(s))
            count++;
        }
        float(d)=(count)*100/t;
        printf("%lf%\n",d);
        count=0,t=0;
    }
    return 0;
}
