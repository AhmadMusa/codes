#include <stdio.h>
int main()
{
    printf("PERFECTION OUTPUT\n");
    long long int num,i;
    int temp=0,c;

    while(scanf("%llu",&num)==1)
    {
        if(num==0)
            printf("END OF OUTPUT\n");
    else
    {
    c=num;
    i=1;
    while(i<num)
    {

        if(c%i==0)
        {
            temp=temp+i;

            i++;
        }
        else
            i++;
    }

    if(temp ==num)
        printf("%5llu  PERFECT\n",num);


    else if(temp < num)
        printf("%5llu  DEFICIENT\n",num);



    else if(temp > num)
        printf("%5llu  ABUNDANT\n",num);
    temp=0, i=0;
    }
    }

return 0;
}
