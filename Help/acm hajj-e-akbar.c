#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];
    int i=0;
    while(scanf("%s",&s)==1)
    {

        if(s[0]=='*')
            break;
        if(strlen(s)==4){

        i++;
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
        {
          i++;
         printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
return 0;
}
