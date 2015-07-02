#include <stdio.h>
#define pi 2*acos(0)
int main()
{
    int l , w , h , d;
    while(scanf("%d %d %d %d",&l,&w,&h,&d)==4)
    {
        double height = l*(tan(d*pi/180));
        if(height>h)
        {
            printf("%.3lf mL\n",.5*l*h*h*w/height);
        }
        else
            printf("%.3lf mL\n",l*w*((h)-(0.5*height)));
    }
    return 0;
}
