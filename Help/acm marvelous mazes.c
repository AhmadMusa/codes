#include<stdio.h>
int main()
{
    freopen("too.txt","r",stdin);

    char ch;
    long I,sum=0,flag=0,n=0;
    while((ch=getchar())!=EOF)
    {
        if(ch>=48&&ch<=57)
        {
            sum=sum+ch-48;
            n=1;
        }
        else
        {
            if(ch=='b')
            {
                for(I=1; I<=sum; I++)
                    printf(" ");
            }
            else if(ch=='!')
            {
                printf("\n");

            }

            else if(ch!='\n')
            {
                for(I=1; I<=sum; I++)
                    printf("%c",ch);
            }

            sum=0;

        }
        if(n==1&&ch=='\n')
        {
            printf("\n");

        }
    }

    return 0;
}
