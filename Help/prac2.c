#include <stdio.h>
int main()
{

    char str[100];

    char str2[100];

    scanf("%s %s",&str,&str2);

    int i =0;
    printf("%d\n",strcmp(str,str2));
    while(str[i]==str2[i])
    {
        if(str[i]=='\0')
        {
            printf("0\n");
            break;
        }

        i++;
    }

    if(str[i]!=str2[i])
    {
        if(str[i]>str2[i])
            printf("1\n");
        else
            printf("-1\n");

    }


}
