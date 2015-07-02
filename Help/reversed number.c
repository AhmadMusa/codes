//reversed number
#include <stdio.h>
int main()
{
    int n;

    int reversed=0, temp;
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        reversed=reversed*10 + (n%10);
        n=n/10;
    }
    printf("Reversed number of %d is %d",temp, reversed);

}

