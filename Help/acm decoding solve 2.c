#include <stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int test;
    int i=1;
    scanf("%d",&test);
    while(i<=test)
    {
        printf("Case %d: ",i);
        int j;
        char c;
        while(scanf("%c %d",&c,&j)==2)
        {
            int k;
            for(k=0;k<j;k++)
                printf("%c",c);
        }
        printf("\n");
        i++;
    }
}
