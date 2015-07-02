#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char skew[1024];
    int i, n, j,l, t=0;
    while(scanf("%s",&skew)==1)
    {
        if(skew[0]=='0' && strlen(skew)==1)
            break;

        l=strlen(skew);
        i=0;
        while(i<strlen(skew))
        {
            n=skew[i]-'0';
            t=t+(n*(pow(2,(l-i)))) - n;
            i++;
        }
        printf("%d\n",t);
        t=0;
    }
    return 0;
}


