#include <stdio.h>
#include <conio.h>
main()
{
    float sin,r,d,term=1;
    int i,n;

    scanf("%f",&d);
    r=(d*3.1416)/180;

    sin=r;

    for(n=1;n<10000;n++)
{
        for(i=(2*n+1);i>=1;i--)
        {
            term=term*(r/i);
        }
    if(n%2==0)
    {
        sin=sin+term;
    }
    else
    {
        sin=sin-term;
    }
}

printf("Sin %.0f = %1.1f",d,sin);
getch();
}
