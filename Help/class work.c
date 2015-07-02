//class work 1
#include <stdio.h>
int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    int number,sum,result;

    result=number/2;
    sum=result+result;

    if(number==sum)
        printf("number is even \n");
    else
        printf("Number is odd \n");

    return 0;
}
