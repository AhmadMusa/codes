#include <stdio.h>
int a = 4;
int main()
{
    int a = 2;
    {
            extern int ab;

            printf("%d",a) ;
    }
}
