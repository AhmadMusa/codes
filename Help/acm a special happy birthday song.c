#include <stdio.h>
#include <string.h>

int main()
{
    char *s[16]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

    char new[100][101];
    int test;
    scanf("%d",&test);
    int i,j;
    for(i=0; i<test; i++)
    {
        scanf("%s",new[i]);
    }
    i=0,j=0;
    int flag=0;
    while(1)
    {
        printf("%s: %s\n",new[i++],s[j++]);
        if(i==test)
            flag=1;

        if(j==16)
        {
            if(flag==1)
                break;
            else
                j=0;
        }
        if(i==test)
        {
            i=0;
        }

    }
    return 0;

}
