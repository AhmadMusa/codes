#include <stdio.h>
char big[100000];
int main()
{
    freopen("SLOGAN.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    int test;
    scanf("%d",&test);

    getchar();
    while(test--)
    {

        scanf("%s",&big);
        int i,n;
        scanf("%d",&n);
        getchar();
        for(i=0;i<n;i++)
        {
            char small[1000];
            scanf("%s",small);
            if(strstr(big,small))
                printf("y\n");
            else
                printf("n\n");

        }

    }
}
