#include <stdio.h>
int num[10]= {1,2,4,6};
int check[10];
int sum;
int count=0;
void subset(int n);
int  main()
{
    subset(0);
}
void subset(int n)
{
    if(n==4)
        return;
    check[n]=1;
    sum+=num[n];
    count++;
    if(count>=2)
    {
        printf("%d\n",sum);
        count--;
        check[n]=0;
        sum-=num[n];
        return;
    }
    subset(n+1);
    check[n]=0;
    sum-=num[n];
    count--;
    subset(n+1);
}
