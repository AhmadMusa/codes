#include <stdio.h>
int main()
{
    int a, b;
    int l, count=0,c=0;
    while(scanf("%d %d",&a,&b)==2)
    {
    n=a;
    while(a<=b)
    {
        count=0;
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
            count++;


        }
        else
        {
            a=(3*a) +1;
            count++;

        }
    }

    if(count>=c)
        c=count;
    count=0;
    a++;
    }
    printf("%d\n",c);

}
}
