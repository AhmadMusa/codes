#include <stdio.h>
int main()
{
    long long  test, i=0;
    int  a[100];
    scanf("%lld",&test);
    while(i<test)
    {
        int k,maxgcd=0,rgcd;



        for(k=0;k<;k++)
        {
            printf("%d %d\n",temp1,temp2);
            rgcd=gcd(temp1,temp2);
            if(rgcd>=maxgcd)
            {
                maxgcd=rgcd;
            }
        }
        printf("%d\n",maxgcd);
        i++;
    }
}
int gcd( int x,int y)
{
    while(x!=y)
    {
        if(x>y)
            return gcd(x-y,y);
        else
            return gcd(x,y-x);
    }
    return x;

}
