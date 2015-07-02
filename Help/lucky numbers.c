#include <stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int num;
        scanf("%d",&num);

        if(num%10==1)
            printf("%ld",num*6);
        else if(num%10==2 ||num%10==7)
            printf("%ld",num*4);
        else if(num%10==3 || num%10==4 || num%10==9)
            printf("%ld",num*2);
        else if(num%10==6 || num%10==8)
            printf("%ld",num);
        else if(num%10==5)
            printf("-1");
        else if(num%10==0)
        {
            if(p(num)==1)
                printf("%ld",num*6);
            else if(pr(num)==1)
                printf("%ld",num*8);
            else
                printf("-1");
        }
        printf("\n");
    }
    return 0;
}

int p(int n)
{
    long int s=n*6;
    while(s)
    {
        if(s%10==6)
            return 1;
        s=s/10;
    }
    return 0;
}
int pr(int n)
{
    long int s=n*8;
    while(s)
    {
        if(s%10==8)
            return 1;
        s=s/10;
    }
    return 0;
}

