#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[101];
    while(scanf("%d %s",&i,&s)==2)
    {
        if(i==0)
            break;

        int p;
        p=strlen(s);
        i=p/i;


        int j,k;
        for(j=0;s[j]!='\0';j=j+i)
        {
            for(k=j+i-1;k>=j;k--)
                printf("%c",s[k]);
        }

        printf("\n");

    }

    return 0;
}
