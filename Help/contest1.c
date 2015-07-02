#include <stdio.h>
#include <math.h>

double func( double x1, double y1, double x2 , double y2);
int main()
{
    freopen("input.txt","r",stdin);
    int t ;
    while(scanf("%d",&t)==1 && t)
    {
        double x1, y1 , x2 , y2 ;


        int i , ans =0;
double temp, dis;
double arr[2*t+1];
        for(i=1; i<=2*t; i=i+1)
        {
            scanf("%lf",&arr[i]);
        }

for(i=3 ; i<=2*t ; i=i+2)
            {
                dis = func(arr[i-2],arr[i-1],arr[i],arr[i+1]);
                if(i==3)
                    temp=dis;
                if(temp!=dis)
                    ans =1;
            }
        if(ans)
            printf("Not possible.\n");
        else
            printf("Possible.\n");
    }
    return 0;
}
double func ( double x1, double y1, double x2 , double y2)
{
    double t = (x1-x2)*(x1-x2) + (y1-y2) * (y1-y2);
    t = sqrt(t);

    return t;
}
