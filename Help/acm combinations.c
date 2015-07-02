
#include <stdio.h>
int main()
{
    double n,k;
    double fac(double n);
    while(scanf("%lf %lf",&n,&k)==2)
    {
        if(n==0 && k==0)
            break;
        else
        {
            double sol;
            sol= (fac(n)/ (fac(n-k)*fac(k)));
            printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,k,sol);
        }

    }
    return 0;
}

double fac(double n)
{
    double i,r=1;
    for(i=2;i<=n;i++)
    {
        r*=i;
    }
    return r;
}
