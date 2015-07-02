#include <stdio.h>
int main()
{
    int  test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b;
        int taka;
        scanf("%d %d %d",&a,&b,&taka);
        int jog, biyog;
        if(a>b){
        biyog=a-b;
        jog=a+b;
        }
        else
        {
            biyog=b-a;
        jog=b+a;
        }
        double sol=0;
        if(a==b)
            printf("%d\n",taka/2);
        else
            printf("%.0lf\n",sol=((2*a-b)*taka)/(jog));

    }

}
