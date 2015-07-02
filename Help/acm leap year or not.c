#include <stdio.h>
#include <string.h>
char s[10000000];
int main()
{
    int n, k=0 ;
    while(scanf("%s",&s)==1)
    {
        if(k>0)
            printf("\n");
        int count=0;
        if((leap(s,4)==0 && leap(s,100)!=0) || leap(s,400)==0)
        {
            printf("This is leap year.\n");
            if(leap(s,15)==0)
        {
            printf("This is huluculu festival year.\n");

        }
            if(leap(s,55)==0)
            {
                printf("This is bulukulu festival year.\n");
            }

        }

        else
        {
            if(leap(s,15)==0)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }


        k++;
    }
    return 0;
}

int leap(char s[],int n)
{
    int mod=0,i;
    for(i=0; i<strlen(s); i++)
    {
        mod=(mod*10 + s[i]-'0')%n ;
    }
    return mod;
}
