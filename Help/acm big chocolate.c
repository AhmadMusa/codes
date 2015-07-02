//10970
#include <stdio.h>
int main()
{
    long int a,b;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        printf("%ld\n",a*b-1);
    }
    return 0;
}
