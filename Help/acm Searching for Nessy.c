#include <stdio.h>
int main()
{
    int t, i=0;
    scanf("%d",&t);
    while(i<t)
    {
        int a, b;
        scanf("%d %d",&a,&b);

        printf("%d\n",(a/3)*(b/3));

        i++;
    }
    return 0;
}
