#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,m;
        scanf("%d:%d",&h,&m);

        int t;
        if(h==12)
        {
            m=60-m;
            if(m>30)
                h=h;
            else
                h--;
            if(m==60)
                printf("%d:0%d\n",h,m-60);
            else
                printf("%d:%d\n",h,m);
        }
        else if(h<11)
        {
            h=11-h;
            m=60-m;
            if(h<10)
                printf("0%d:%d\n",h,m);
        }
        else
        {
            if(m/5-1<10)
                printf("0%d:%d\n",m/5-1,60-m);
            else
                printf("%d:%d\n",m/5-1,60-m);
        }
    }
}
