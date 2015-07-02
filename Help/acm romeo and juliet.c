#include <stdio.h>
#include <math.h>
#define pi 2*acos(0.0)
int main()
{
    double x1,y1,x2,y2, a1 , a2;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&a1,&a2)==6)
    {
        double s = sqrt ( (x1-y1)*(x1-y1) + (x2-y2)*(x2-y2));
        double ans = (1/(tan(a1*pi/180))) ;
        ans += (1/(tan(a2*pi/180))) ;
        ans = ans *s ;
printf("%.3lf\n",ans);

    }
    return 0;
}
