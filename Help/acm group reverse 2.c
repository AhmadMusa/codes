#include <stdio.h>
#include <string.h>
char str[200],str1[50],str2[50];
int main()
{
    int n,k,i,j,r,t,len;
    while(scanf("%d %s",&n,str)==2)
    {
        if(n==0)
            break;
        len=strlen(str);
        k=len/n;
        j=0;
        for(i=0; i<=len; i++)
        {
            if(str[i]!='\0')
                str1[j++]=str[i];
            if(j>=k)
            {
                t=j-1;
                for(r=0; t>=0; r++)
                    str2[r]=str1[t--];
                str2[r]='\0';
                printf("%s",str2);
                j=0;
            }
        }
        printf("\n");
    }
    return 0;
}
