#include <stdio.h>
int main()
{
    int i,j=1;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

    printf("%d",i*j);
    j=j*10+1;

    printf("\n");
    }
return 0;
}
