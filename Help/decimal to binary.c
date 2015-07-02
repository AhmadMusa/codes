#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=0;
    int bin[1000];

    while(n!=0)
    {
        bin[t++]=n%2;
        n=n/2;
    }
    for(;t--;)
    {
        printf("%d",bin[t]);
    }
}
