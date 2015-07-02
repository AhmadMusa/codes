#include <stdio.h>
#include <math.h>
#define Pi 3.141592653589793
int main()
{
    double x1,x2,x3,y1,y2,y3;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        double a,b,c,d,e,f,ans;
        a=x2-x1, b=y2-y1, c=x2-x3, d=y2-y3, e=x3-x1, f=y3-y1;
        double root,hor;
        root= sqrt((a*a+b*b)*(c*c+d*d)*(e*e+f*f));
        hor=abs(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
        ans= (Pi*root)/hor;
        printf("%.2lf",ans);

    }

}
