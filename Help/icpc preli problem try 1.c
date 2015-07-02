#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int arr[1000];
int main()
{
    int test,cases=1;
    scanf("%d",&test);
    while(test--)
    {
        long long int sq, num;
        scanf("%lld",&num);
printf("Case %d: ",cases++);
        long  long int i,flag=0;
            int c=0, d=0;
        for(i=2;i<=num/2;i++)
        {
            sq=i*i;
            if(sq%num==i)
            {
                 if(flag==1)
                printf(" ");
                flag=1;
                arr[c++]=num+1-i;
                printf("%d",i);
            }
        }

        if(flag==1){
                while(c){
            printf(" %d",arr[--c]);
                }
            printf("\n");
        }
        else
            printf("no solution\n");
    }
    return 0;
}
