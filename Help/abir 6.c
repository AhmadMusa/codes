#include <stdio.h>
int main()
{
    int hours ,  rate ;
    printf("Enter your hours at work and rate : ");

    scanf("%d %d",&hours, &rate );

    double gross, tax;

    gross= hours * rate ;

    if(gross > 5000)
    {
        tax= (gross*5)/100;
    }

    printf("Net payment  : %lf ", gross-tax);


}
