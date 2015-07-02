#include <stdio.h>
#include <string.h>
int main()
{
    char s[15];
    int i=1;
    while(scanf("%s",&s)==1)
    {
        if(strcmp(s,"#")==0)
            break;
        if(0==(strcmp(s,"HELLO")))
            printf("Case %d: ENGLISH\n",i++);
        else if(0==(strcmp(s,"HOLA")))
            printf("Case %d: SPANISH\n",i++);
        else if(0==(strcmp(s,"HALLO")))
            printf("Case %d: GERMAN\n",i++);
        else if(0==(strcmp(s,"BONJOUR")))
            printf("Case %d: FRENCH\n",i++);
        else if(0==(strcmp(s,"CIAO")))
            printf("Case %d: ITALIAN\n",i++);
        else if(0==(strcmp(s,"ZDRAVSTVUJTE")))
            printf("Case %d: RUSSIAN\n",i++);
        else
        {
            printf("Case %d: UNKNOWN\n",i++);
        }
    }

    return 0;

}
