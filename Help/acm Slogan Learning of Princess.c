#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[40][101];
    int n;

    scanf("%d",&n);
    getchar();

    for(i=0; i<2*n; i++)
        gets(s[i]);

    int num;
    scanf("%d",&num);
    getchar();
    while(num--)
    {
        char new[1000];
        gets(new);
        for(i=0; i<2*n-1; i=i+2)
        {
            if(strcmp(s[i],new)==0)
                printf("%s\n",s[i+1]);
        }
    }
    return 0;
}
