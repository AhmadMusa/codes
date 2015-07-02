#include <stdio.h>
#include <string.h>
char s[100000];
int main()
{
    int t, i=0;
    char c;
    scanf("%d",&t);
    while((c=getchar())!='\n' && c!=EOF);
    while(i<t)
    {
        int j=0,m=0,piece=0;
        gets(s);
        piece = strlen(s)/2;
        if(piece <= 1)
        {
            printf("NO LOOP\n");
        }
        else
        {
        for(j=0; j<strlen(s);j++)
        {
            if(s[j]=='M')
                m++;
            if(s[j]=='F')
                m--;
        }
        if(m==0)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
        }

        i++;
    }
    return 0;
}
