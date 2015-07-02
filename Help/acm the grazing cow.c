#include <stdio.h>
#include <math.h>
#define pi 2*acos(0)
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double D ,L;
        scanf("%lf %lf",&D,&L);

        double a , b;
        a = sqrt((L/2)*(L/2) - (D/2)*(D/2));
b = L / 2;

double s = a*b*pi;
printf("%.3lf\n",s);
    }
}
