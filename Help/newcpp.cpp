#include<stdio.h>
#include <iostream>
using namespace std;
int algo(long long int n) /*algo fn is called to reduce the pain*/
{
    int count=1;

    while(1)
    {
        if (n==1) break;

        if (n%2==0)
        {
            n=n/2;
            count++;
        }

        else
        {
            n=3*n+1;
            count++;
        }
    }

    return count;
}



int main()
{
    long long int i,j,p,q;
    while ((scanf("%lld" "%lld",&i,&j))==2)
    {
        if (i<j)
        {
            p=i;
            q=j;
        }
        if (i>j)
        {
            p=j;
            q=i;
        }

        int max;
        max= algo(p);

        for(long long int l=p+1; l<=q; l++)
        {
            int temp=algo(l);
            if (temp>max)
            {
                max=temp;
            }

        }

        printf("%lld %lld %d\n",i,j,max);

    }

    return 0;
}
