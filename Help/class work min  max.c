#include <stdio.h>
void minmax(int , int);
int factorial (int);
int main()
{
    int n, m;

    int fact=factorial(6);

    printf("%d\n",fact);

}

/* void minmax(int x, int y)
{
    if(x==y)
        printf("They are equal\n");
    else if(x>y)
        printf("%d is greater than %d\n",x,y);
    else
        printf("%d is less than %d\n",x,y);
    factorial(x);
    factorial(y);

}*/

int factorial (int j)
{
    int fac=1;
    while(j>0)
    {
        fac=fac*j;
    j--;
    }

    return fac;
}
