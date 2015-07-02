#include <stdio.h>
#include <string.h>
char s[600];
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long n;
    scanf("%lld",&n);
    char c;
    while((c=getchar())!='\n' && c!=EOF);
    while(n--)
    {
        gets(s);
        int j=0,count=0,a=0,m=0,g=0,r=0,t=0,i=0;
        while(j<strlen(s))
        {
            if(s[j]=='M')
                m++;
            else if(s[j]=='A')
                a++;
            else if(s[j]=='T')
                t++;
            else if(s[j]=='I')
                i++;
            else if(s[j]=='G')
                g++;
            else if(s[j]=='R')
                r++;
            j++;
        }
         while(a>=3 && r>=2 && m >=1 && g>=1 && i>=1 && t>=1)
            {
                count++;
                a=a-3;
                r=r-2;
                g--;
                i--;
                t--;
                m--;
            }

        printf("%d\n",count);

    }
    return 0;
}
