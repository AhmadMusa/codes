#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];

    scanf("%s",&s);
    long long int N;
    scanf("%lld",&N);

    int i=0, mod=0,temp=0,count=0;
    for(i=0;i<strlen(s);i++)
    {
        temp=(mod*10 + s[i]-'0')/N;
        if(i==0)
        {
            if(temp!=0){
                count++;
                printf("%d",temp);
            }
        }
        else if(i==1)
        {

            if(temp==0)
            {
                if(count>0)
                    printf("%d",temp);
            }
            else
                printf("%d",temp);

        }
        else
            printf("%d",temp);

        mod=(mod*10 + s[i]-'0')%N ;

    }
    printf("\n%d\n",mod);

}

