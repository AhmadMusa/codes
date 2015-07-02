#include <stdio.h>
int main()
{
    double bill, usage ;
    printf("Enter ur usage : ");
    scanf("%lf",&usage);

    if(usage <= 200)
    {
        printf("Your bill is = %lf",usage* 2.5);
    }
    else if(usage <= 400)
    {
        if(usage >200)
            bill= (usage-200)*3.5;
        printf("Your bill is %lf", 100 +bill );
    }
    else if(usage <=600)
    {
        if(usage >400)
            bill= (usage-400)*4.5;

        printf("Your bill is %lf", 250 + bill);
    }

    else
    {
        if(usage > 600)
        {
            bill = (usage-600)*6.5;
        }
        printf("Your bill is %lf", 450 + bill);

    }
}
