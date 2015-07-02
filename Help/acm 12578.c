#include<stdio.h>
#define Pi 3.141592653589793
int main()
{
    double length, width,t,radius;
    int test, i=0;
    scanf("%d",&test);
    while(i<test)
    {
        scanf("%lf",&length);
        width = (6*length)/10;
        radius= (length)/5;
        t=radius*radius*Pi;
        printf("%.2lf %.2lf\n",t,(width*length)-t);
        i++;
    }
    return 0;
}
