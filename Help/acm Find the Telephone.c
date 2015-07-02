#include <stdio.h>
#include <string.h>
int main()
{
    char num[30];
    int i=0;
    char w='-';
    while(scanf("%s",&num)==1)
    {
        for(i=0;num[i]!='\0';i++)
        {
                    if(num[i]>='A' && num[i]<='Z')
                    {
                        if(num[i]>='A' && num[i]<='C')
                            printf("%c",2+'0');
                        else if(num[i]>='D' && num[i]<='F')
                            printf("%c",3+'0');
                        else if(num[i]>='G' && num[i]<='I')
                            printf("%c",4+'0');
                        else if(num[i]>='J' && num[i]<='L')
                            printf("%c",5+'0');
                        else if(num[i]>='M' && num[i]<='O')
                            printf("%c",6+'0');
                        else if(num[i]>='P' && num[i]<='S')
                            printf("%c",7+'0');
                        else if(num[i]>='T' && num[i]<='V')
                            printf("%c",8+'0');
                        else if(num[i]>='W' && num[i]<='Z')
                            printf("%c",9+'0');
                    }
                    else if(num[i]==w)
                        printf("%c",num[i]);
                    else
                        printf("%c",num[i]);


        }
        printf("\n");

    }
    return 0;
}
