#include<stdio.h>
int main()
{
    long int cube(long int n);
    long int n;
    while(scanf("%ld",&n)==1 && n!=0)
    {
        long int a;
        int flag=0;
        a=sqrt(n);
        long int i=0,j, temp=1000,temp2=1000;
        if(n==1)
            printf("No solution\n");
        else
        {

        for(j=a;j>0;j--)
        {
            for(i=1; i<a; i++)
            {
                if(n==cube(j)-cube(i))
                {
                    if(j<temp && i<temp2)
                    {
                    temp=j;
                    temp2=i;
                    }
                    flag=1;
                    break;
                }
            }

        }
        if(flag==0)
            printf("No solution\n");
        else
            printf("%ld %ld\n",temp,temp2);
        }
    }
    return 0;
}

long int cube(long int n)
{
    n=n*n*n;
    return n;
}
