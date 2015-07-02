#include<stdio.h>
double dis[2002];
int main()
{
    double distance(double a , double b , double c , double d);
    int n;
    double d1,d2,g1,g2;
    while(scanf("%d %lf %lf %lf %lf",&n,&d1,&d2,&g1,&g2)==5)
    {
         int i,flag=0;

         double ans1, ans2;
         for(i=0;i<n;i++)
         {
             scanf("%lf %lf",&dis[i],&dis[i+1]);
             if(flag==1)
                continue;
             if(distance(g1,g2,dis[i],dis[i+1])>=4*distance(d1,d2,dis[i],dis[i+1]))
             {
                 ans1=dis[i];
                 ans2=dis[i+1];
                 flag=1;
             }
         }
         if(flag==0)
            printf("The gopher cannot escape.\n");
         else
            printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",ans1,ans2);


    }
    return 0;
}

double distance(double a , double b , double c , double d)
{
    double dis = (a-c)*(a-c)+(b-d)*(b-d);
    return dis;
}
