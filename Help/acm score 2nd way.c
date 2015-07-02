#include <stdio.h>
#include <string.h>
int count=0;
int sum=0;
int f=0;
int main()
{
    freopen("input.txt","r",stdin);
    int t,c=1;
    scanf("%d\n",&t);
    int total =0;
    while(c<=t)
    {
        char str[10000];
        scanf("%s",str);
        int i ;
        count=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='O')
            {
                count++;
                total+=count;
            }
            else
            {
                count=0;
            }
        }
        printf("%d\n",total);
        total=0;
        c++;
    }
    return 0;
}
