#include <stdio.h>
int main()
{
    int n, k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int j=0,s=0,s1=0,t;
        t=n;
        while(k<=(s1+n))
        {
            s=s1+n;
            s1=(s1+n)/k;
            j=j+s1;
            n=s%k;
        }
        printf("%d\n",j+t);
    }
}
