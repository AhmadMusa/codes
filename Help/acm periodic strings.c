#include <stdio.h>
int main()
{
    long int test;
    scanf("%ld",&test);
    getchar();
    while(test--)
    {
        char s[100];
        char copys[101];
        scanf("%s",&s);
        int ini=1;
        int i,count=1,pos=0,flag=0;
        copys[0]=s[0];
        for(i=1; i<strlen(s); i++)
        {
            if(flag)
            {
                if(s[1]==s[i])
                {
                    break;
                }
                else if(s[0]==s[i])
                {
                    copys[count++]=s[i-1];
                    pos=i;
                    break;
                }
                else
                {
                    copys[count++]=s[i-1];
                    flag=0;
                }
            }
            if(s[0]!=s[i])
            {
                copys[count++]=s[i];
            }
            else
            {
                flag=1;
                pos=i;
            }
        }
        copys[count]='\0';

        int c=0;
        printf("%d %d\n",count,pos);
        for(i=pos;;i++)
        {
            if(s[i]!=copys[c++])
                break;
        }
        printf("%d\n",c-1);
    }
}
