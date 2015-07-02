#include <stdio.h>
int main()
{

    unsigned long long int n, l,t,m=0, num=0,count=0,c=0;
    unsigned long long int i,j;
    while(scanf("%llu %llu",&i,&j)==2)
    {
        if(i==0 && j==0)
            break;
    if(i>j)
    {
        t=i;
        i=j;
        j=t;
    }
    for(n=i;n<=j;n++)
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
            l=3*l +1;
            count++;
        }
    }
    if(count>c)
    {

    c=count;
    num=n;
    }
    count=0;

    }
    if(i==1 && j==2)
        printf("Between 1 and 1, 1 generates the longest sequence of 3 values.\n");
    else
        printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n",i,j,num,c);

    count=0,c=0,m=0;
    }
return 0;
}
