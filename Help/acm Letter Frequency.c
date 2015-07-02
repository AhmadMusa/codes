#include <stdio.h>
char input[201];
int num[300];
int main()
{


    long long int test,co=1;
    scanf("%lld\n",&test);
    while(test--)
    {

        gets(input);
        int i;
        for(i=97;i<=122;i++)
            num[i]=0;
        int n;

        for(i=0;i<strlen(input);i++)
        {
            if((input[i]>='A' && input[i]<='Z') || (input[i]>='a' && input[i]<='z'))
            {
                n=tolower(input[i]);
                ++num[n];
            }
        }
        int length= strlen(input);
        int max=0;
        for(i=97;i<=122;i++)
        {
            if(num[i]>max)
            {
                max=num[i];
            }
        }

        for(i=97;i<=122;i++)
        {
            if(max==num[i])
                printf("%c",i);
        }
      printf("\n");

    }
    return 0;
}
