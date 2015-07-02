#include <stdio.h>
long long int sum;
int main()
{
    int i,j;
    for(i=1;i<10000;i++)
    {

            sum+=i;

    }
    printf("%d",sum);
}

void rec(int n)
{
    int i;
    for(i=1;i<10000;i++)
    {
        sum+=i;
        n++;
        if(n<=2)
            rec(n+1);

    }
}
