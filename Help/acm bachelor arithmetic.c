#include <stdio.h>
int main()
{
    long long int b,s,c=1;
    while(scanf("%lld %lld",&b,&s)==2)
    {
        if(b==0 && s==0)
            return 0;
         printf("Case %lld: ",c++);

        if(b==0 || b==1)
            printf(":-\\\n");
        else if(b>s)
            printf(":-(\n");
        else
            printf(":-|\n");



    }
    return 0;
}
