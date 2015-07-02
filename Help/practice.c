# include<stdio.h>
# include<string.h>
int main()
{
    char s[20000];
    long long int i,j,k;
    while (gets(s))
    {
        k=1;
        j=strlen(s);
        for(i=0; i<j; i++)
        {
            if(s[i]==' ')
                k=k+1;
        }
        printf("%lld\n",k);
    }
    return 0;
}
