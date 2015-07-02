#include <stdio.h>
int main()
{
    int n, i=0;
    scanf("%d",&n);
    while(i<n)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(b>a)
            printf("impossible\n");
        else
        {
            if((a+b) % 2 ==1)
                printf("impossible\n");
            else
                printf("%d %d\n",(a+b)/2,(a-b)/2);

        }
        i++;
    }
    return 0;
}
