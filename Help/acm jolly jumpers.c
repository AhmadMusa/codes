#include <stdio.h>
#include <math.h>
long int array[3001];
long int new[3001];
int main()
{
    int n, k=0, count=0;
    int i=0;
    long int j=0;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%ld",&array[i]);
            new[i]=0;
        }

        for(i=0; i<n-1; i++)
        {
            j=abs(array[i+1]-array[i]);
            new[j]=1;
        }
        for(i=1; i<n; i++)
        {
            if(new[i]==0)
            {
                printf("Not jolly\n");
                break;
            }


        }
        if(i==n)
            printf("Jolly\n");


    }
    return 0;
}
