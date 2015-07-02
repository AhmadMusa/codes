#include <stdio.h>
#include <string.h>
char n[100000];
char n2[100000];
int main()
{
    while(scanf("%s %s",&n,&n2)==2)
    {
        if((strlen(n)==1 && n[0]=='0' )&& (strlen(n2)==1 && n2[0]=='0'))
            break;
        int a,b;
        int len1,len2;
        len1=strlen(n);
        len2=strlen(n2);


        a=n[len1-1]-'0';
        b=n2[len2-1]-'0';

        if(a==1)
            printf("1\n");
        else if(a==2)
        {
            if(b==1)
            {
                printf("2\n");
            }
            else if(b==2)
                printf("4\n");
            else if(b==3)
                printf("8\n");
            else if(b==4)
                printf("6\n");
            else if(b==5)
                printf("2\n");
            else if(b==6)
                printf("4\n");
            else if(b==7)
                printf("8\n");
            else if(b==8)
                printf("6\n");
            else if(b==9)
                printf("2\n");
            else if(b==0)
                printf("")

        }

    }
}
