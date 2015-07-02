#include <stdio.h>
#include <string.h>
char s[100000];
int main()
{
    int t;
    scanf("%d",&t);
    char c;
     while((c=getchar())!='\n' && c!=EOF);
    while(t--)
    {
        gets(s);
        int l,i,count=0,count1=0;
        l=strlen(s);
        //printf("%d",l);
        int k,j,a=0;
        k=sqrt(l);
        if((k*k)!=l)
            printf("INVALID\n");
        else
        {
            for(j=0;j<k;j++)
            {
                for(i=j;i<l;i=i+k)
                {
                    printf("%c",s[i]);
                }

            }
            printf("\n");

        }

    }
return 0;
}
