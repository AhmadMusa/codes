#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,k,area;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
    if(a<=0||b<=0||c<=0)
    {
    printf("The radius of the round table is: 0.000\n");

    continue;
    }
    k=(a+b+c)/2;
    area=sqrt(k*(k-a)*(k-b)*(k-c));
    printf("The radius of the round table is: %.3lf\n",area/k);
    }
    return 0;
}

