#include <stdio.h>
int main()
{
    long long male=0,all=1,temp, n;

    while(scanf("%lld",&n)==1)
    {
        if(n==-1)
            break;
        male=0, all=1;
        temp=0;
        long long int i=1;
        while(i<=n)
        {
            temp=male;
            male=all;
            all=male+1+temp;
            i++;
        }
        printf("%lld %lld\n",male,all);

    }
    return 0;
}
