#include <stdio.h>
int main()
{
    struct book
    {
        char name[21];
        int days;
    };
    struct book array[101];
    int n, test,c=1;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int D,i;
        for(i=0; i<n; i++)
        {
            scanf("%s %d",&array[i].name,&array[i].days);
        }
        scanf("%d",&D);
        char s[101];
        scanf("%s",&s);

        for(i=0; i<n; i++)
        {
            if(strcmp(array[i].name,s)==0)
            {
                if(D>=array[i].days)
                {
                    printf("Case %d: Yesss\n",c++);
                    break;
                }
                else if(D+5>=array[i].days)
                {
                    printf("Case %d: Late\n",c++);
                    break;
                }
                else
                {
                    printf("Case %d: Do your own homework!\n",c++);
                    break;
                }
            }
        }
        if(i==n)
        {
            printf("Case %d: Do your own homework!\n",c++);
        }


    }
    return 0;
}
