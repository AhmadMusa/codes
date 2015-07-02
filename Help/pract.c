#include <stdio.h>
#include <string.h>
char s1[2000010],s2[2000010];
int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i,j;
    while(scanf("%s %s",s1,s2)==2)
    {
        if(strstr(s2,s1)==0)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
