#include <stdio.h>
int main()
{
    freopen("INPUT.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        if(n==2)
            printf("Perfect: 6!\n");
        else if(n==3)
            printf("Perfect: 28!\n");
        else if(n==5)
            printf("Perfect: 496!\n");
        else if(n==7)
            printf("Perfect: 8128!\n");
        else if(n==13)
            printf("Perfect: 33550336!\n");
        else if(n==17)
            printf("Perfect: 8589869056!\n");
        else if(n==19)
            printf("Perfect: 137438691328!\n");
        else if(n==31)
            printf("Perfect: 2305843008139952128!\n");
        else
        {
            if(prime(n)==0)
                printf("Given number is NOT prime! NO perfect number is available.\n");
            else
                printf("Given number is prime. But, NO perfect number is available.\n");
        }
    }
return 0;
}

int prime (int n)
{
    if(n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19 || n==23 || n==29 || n==31)
        return 1;
    else
        return 0;


}
