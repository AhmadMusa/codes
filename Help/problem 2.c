#include <stdio.h>
int main()
{
    int year;

    printf("Enter ur year :");
    scanf("%d",&year);

    int i;
    for(i=1762;i<=year;i++)
    {
        int temp=i;
        if(1==leap_year(temp))
            printf("%d\n",i);
    }
}

int leap_year(int year)
{
    if((year % 4==0 && year%100!=0) || year%400==0)
        return 1;
    else
        return 0;
}
