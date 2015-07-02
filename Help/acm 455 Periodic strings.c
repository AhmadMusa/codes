#include <stdio.h>
#include <string.h>
int main()
{
    int  test, i=0;
    scanf("%d",&test);
    while(i<test)
    {
        char s[80];
        char ch;
        scanf("%s",&s);
        int count=0;
        int k;
        ch=s[0];
        for(k=1;k<strlen(s);k++)
        {
            count++;
            if(s[k]==ch)
            {
                l=count;
                count=0;
            }
        }
        if(count==strlen(s)-1)
            printf("%d\n",strlen(s));
        if(i<(test-1))
            printf("\n");
        i++;
    }
    return 0;
}
