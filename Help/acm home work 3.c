#include <stdio.h>
int main()
{
    double i,y;
    float x=5.5;
    printf("   i      y      x\n\n\n");
    int t;
    for(y=1;y<=6;y++)
    {
        x=5.5;
        for(x=5.5;x<=12.5;x=x+.5)
        {
            i=2+(y+0.5 * x);
            printf("   %3.2lf   %3.1lf   %3.1lf\n",i,y,x);
        }
    }
return 0;

}
