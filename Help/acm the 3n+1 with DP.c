#include <stdio.h>
int array[1000000];
int main()
{
    long long int n,l,t;
    long long int i,j;

    while(scanf("%llu %llu",&i,&j)==2)
    {
        long long int  count=0,c=0,flag=0;
        if(i>j)
        {
            t=i;
            i=j;
            j=t;
            flag=1;
        }

        for(n=i; n<=j; n++)
        {
            l=n;
            while(l!=1)
            {
                if(l%2==0)
                {
                    l=l/2;
                    count++;
                }
                else
                {
                    if(array[l]==0)
                    {
                        l=l*3+1;
                        count++;
                    }
                    else
                    {
                        count+=array[l];
                        break;
                    }
                }

            }
            if(array[n]==0 && n%2==1)
                array[n]=count;

            if(count>c)
            {
                c=count;
            }
            count=0;

        }

        if(flag==1)
        {
            printf("%llu %llu %llu\n",j,i,c+1);
        }
        else
        {
            printf("%llu %llu %llu\n",i,j,c+1);
        }

    }
    return 0;
}

