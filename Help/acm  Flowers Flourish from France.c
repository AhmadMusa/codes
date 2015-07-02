#include <stdio.h>
int main()
{
    char s[1001];
    while(gets(s))
    {
        if(strcmp(s,"*")==0)
            return 0;

        int count;
        int i, flag=0;
        char ch;
        for(i=0;i<strlen(s);i++)
        {
            if(i==0)
            ch=tolower(s[i]);

            if(s[i]==' ')
            {
                if(ch!=tolower(s[i+1])){
                flag=1;
                break;
                }
            }
        }
        if(flag==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
