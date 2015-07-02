#include <stdio.h>
#include <string.h>
int main()
{
    //freopen("input1.txt","r",stdin);

    int test,c=1;
    scanf("%d",&test);
    while(test--)
    {
        if(c!=1)
            printf("\n");
        int length;
        scanf("%d",&length);
        getchar();
        int flag=0;
        char input[1000];

        int i,j;
        printf("Case %d:\n",c++);

        for(i=0; i<length; i++)
        {
            flag=0;
            gets(input);
            for(j=0; j<strlen(input); j++)
            {
                if(input[j]==' ')
                {
                    if(flag==0 )
                    {
                        printf(" ");
                        flag=1;
                    }

                }
                else
                {
                    flag=0;
                    printf("%c",input[j]);
                }
            }
            printf("\n");
        }

    }
    return 0;
}
