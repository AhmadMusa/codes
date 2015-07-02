#include <stdio.h>
char s[1000000];
int main()
{
    long long int n, k=0;

    while(scanf("%lld",&n)==1 && n>=0)
    {
        if(n==0)
            printf("0\n");
        else
        {
            k=-1;
            while(n!=0)
            {
                s[++k]=n%3 +'0';
                n=n/3;
            }
            s[++k]='\0';
            while(k--)
                printf("%c",s[k]);
            printf("\n");
        }
    }
    return 0;

}
