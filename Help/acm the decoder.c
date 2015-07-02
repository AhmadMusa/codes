#include <stdio.h>
#include <string.h>
char string[1000000];
int main()
{

    while(scanf("%s",&string)==1)
    {
        int i;
        for(i=0;i<strlen(string);i++)
        {
                printf("%c",string[i]-7);

        }
        printf("\n");
    }
    return 0;
}
