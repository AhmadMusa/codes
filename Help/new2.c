#include <stdio.h>
main()
{
    float n,term=1,sum=1;
    int i;

    scanf("%f",&n);

    for(i=1;i<n;i++)
    {
        term=(term/i);
        sum=sum+term;
    }
    printf("%f",sum);
}
