// decimal to binary
#include <stdio.h>
int main()
{
    int choice;
    int n;
    printf("enter number :");
    scanf("%d",&n);
    printf("\n Enter choice :");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Square of %d is %d",n,n*n);
        break;
    case 2:
        printf("Square root of %d is %d",n,sqrt(n));
        break;
    }
}
