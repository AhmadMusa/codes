// greatest common divisor (GCD)
#include <stdio.h>
int main()
{
    long  int x=253;
    long int y=21;
    long int a,b;

    long int remainder ;



    a=x,b=y;
    int s=0;
    while( y != 0 )
    {
        s++;
        remainder = x % y;
        x = y;
        y = remainder;
    }
    printf("The Greatest Common Divisor of %ld & %ld is %ld-  %d",a,b,x,s);

}
