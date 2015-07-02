#include <stdio.h>
#include <string.h>
int main()
{
    freopen("string.txt","r",stdin);
    int test,t=0,newr;
    scanf("%d",&test);
    getchar();
    newr=test;
    char letter[101][35];
    int i=0;
    while(gets(letter[i]) && t!=test)
    {
        if(letter[i][0]=='\0')
        {
            test--;
            t++;
            if(t!=1)
                printf("\n");
            printf("Case #%d:",t);
        }

        else
        {
            printf("\n");
            f(letter[i]);

        }


        i++;
    }
    return 0;

}


void f(char s[])
{
    int i=0,count=0,flag=0;
    for(i=0; i<strlen(s); i++)
    {
        if(i==0)
        {
            printf("%c",s[i]);

        }
        else
        {
            if(s[i-1]==' ')
            {

                if(s[i+count+1]!=' ' && s[i+count]!=' ' && s[i]!=' ')
                {
                    count++;
                    printf("%c",s[i+count]);

                }

            }
        }

    }
}

