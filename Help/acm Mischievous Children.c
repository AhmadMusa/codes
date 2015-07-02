#include <stdio.h>
#include <string.h>
#include <stdlib.h>
        char s[1000];
int comp(void const *a, void const *b)
{
    char *x= (char*) a;
    char *y= (char*) b;
    return *x-*y;
}
int main()
{
    long long n;
    int sT=1;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%s",&s);
        unsigned long long  low=1;
        long long int i, flag=0;
        int length= strlen(s);
        unsigned long long int count=1;

        qsort(s,strlen(s),sizeof(s[0]),comp);

        for(i=0; i<strlen(s)-1; i++)
        {
            if(s[i]==s[i+1])
            {
                flag=0;
                count++;
            }
            else
            {
                flag=1;
                if(count>1)
                {
                    while(1)
                    {
                        low*=count;
                        count--;
                        if(count==1)
                            break;
                    }
                    count=1;
                }

            }
        }
        if(flag==0)
        {
            if(count>1)
            {
                while(count--)
                    low*=count;
                count=1;
            }
        }

        unsigned long long  sol=1;
        for(i=2; i<=length; i++)
            sol*=i;

        //printf("%llu %llu",sol,low);
        sol= (sol/ low);
        printf("Data set %d: %.llu\n",sT++,sol);
    }
    return 0;
}
