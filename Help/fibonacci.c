//fibonacci numbers
#include <stdio.h>
int main()
{
    int n,a,b,i,fib;
    a=0,b=1;
    printf("Enter  number to show n fibonacci numbers:" );
    scanf("%d",&n);

    printf("%d ",1);

    for(i=0; i<=n; i++)
    {
        fib=a+b;
        printf("%d ",fib);
        a=b;
        b=fib;
    }


}

