#include <stdio.h>
main()
{
    float sin,x,d,term=1;
    int i,n;

    scanf("%f",&d);
    x=(d*3.1416)/180;

    sin=x;

    for(n=1; n<1000; n++)
    {

        for(i=(2*n+1); i>=1; i--)
        {
            term=term*(x/i);
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

    printf("Sin %.0f = %1.2f",d,sin);

}
