#include <stdio.h>
#include <string.h>
int main()
{
    int t, i=0;
    scanf("%d",&t);
    while(i<t)
    {
        int n;
        scanf("%d",&n);
        int j,k;
        n=(315*n)+36962;
        for(j=0;j<=1;j++)
        {
            k=n%10;
            n=n/10;
        }

        printf("%d\n",abs(k));
        i++;
    }
}
