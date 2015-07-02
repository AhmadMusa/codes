#include <stdio.h>
#include <string.h>
char s[200];
int main()
{

    int i=1,testcase;
    scanf("%d",&testcase);
    while(i<=testcase)
    {
        printf("Case %d: ",i);
        int k;
        int temp=0;
        char ch;
        scanf("%s",&s);

        for(k=0; k<=strlen(s); k++)
        {

            if(s[k]>='A' && s[k]<='Z' || s[k]=='\0')
            {
                if(temp>0)
                {
                    while(temp--)
                    {
                        printf("%c",ch);
                    }
                }
                ch=s[k];
                temp=0;
            }
            else
            {
                temp=s[k]-'0' + temp*10;
            }
        }
        printf("\n");
        i++;
    }

    return 0;
}
