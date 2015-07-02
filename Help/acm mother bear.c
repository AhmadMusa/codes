#include <stdio.h>
char s[1000000];
char r[1000000];
char rev[1000000];
int main()
{

    while(gets(s))
    {
        if(s[0]=='D'&&s[1]=='O'&&s[2]=='N'&&s[3]=='E'&&s[4]==0)
            break;
        int i,a=0,y=0;
        for(i=0; i<strlen(s); i++)
        {
            if((s[i]>='a'&& s[i]<='z') || s[i]>='A' && s[i]<='Z')
            {
                r[a++]=tolower(s[i]);
            }
        }
        r[a]='\0';

        int k;
        k=strlen(r);
        a=0;
        for(i=k-1; i>=0; i--)
        {
            rev[a++]=r[i];
        }
        rev[a]='\0';

       for(i=0;i<a;i++)
       {
           if(r[i]!=rev[i])
           {
               printf("Uh oh..\n");
               y=1;
               break;
           }
       }
       if(y==0)
       {
           printf("You won't be eaten!\n");
       }

    }
    return 0;

}
