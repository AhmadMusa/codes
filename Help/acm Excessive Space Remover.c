#include <stdio.h>
#include <string.h>
char s[100000000];
int main()
{
    long int ans(long long int n);
    while(gets(s))
    {
        long long int i, max=0,flag=0;
        long int count=0;

        for(i=0; i<strlen(s); i++)
        {
            if(s[i]==' ')
            {
                count++;
                flag=0;
            }
            else
            {
                if(count>max)
                {
                    max=count;
                }
                count=0;
                flag=1;
            }
        }


        count = ans(max);

        printf("%ld\n",count);
    }
    return 0;
}


long int ans(long long int n)
{
    long  int count=0;
    int t=1;

    while(t<=n)
    {
        t=t*2;
        count++;
        if(t==n)
            break;
    }
    return count;
}
