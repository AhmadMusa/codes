//Least common multiple
#include<stdio.h>
int main()
{
    int num1, num2, max;
    printf("Enter two positive integers: ");

    scanf("%d %d", &num1, &num2);
    if(num1>num2)
        max=num1;
    else
        max=num2;

    while(1) /* Always true. */
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("LCM of %d and %d is %d", num1, num2,max);
            break; /* while loop terminates. */
        } ++max;
    }
    return 0;

}
