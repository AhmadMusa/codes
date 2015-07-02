#include <stdio.h>
int main()
{
    int test, n, a,b,c;
    scanf("%d",&test);
    while(test--)
    {
        int s=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d %d %d",&a,&b,&c);
            s=s+(a*c);
        }
        printf("%d\n",s);
    }
    return 0;
}
