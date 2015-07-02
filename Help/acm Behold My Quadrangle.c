#include <stdio.h>

int main()
{
    unsigned long long a[4],i,j,temp;
    long long test;
    scanf("%lld",&test);
    while(test--)
    {
        for(i=0; i<4; i++)
            scanf("%llu",&a[i]);
         for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0)
            printf("banana\n");

        else if(a[0]==a[1] && a[2]==a[3] && a[1]!=a[2])
            printf("rectangle\n");
        else if(a[0]+a[1]+a[2]<a[3])
            printf("banana\n");
        else if(a[0]==a[1] && a[2]==a[3] && a[1]==a[2])
            printf("square\n");
        else
            printf("quadrangle\n");

    }
    return 0;
}
