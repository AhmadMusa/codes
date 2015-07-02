#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n;
    while(scanf("%u",&n)==1)
    {
        if(n==0)
            break;
        int t;
        t=sqrt(n);
        if((t*t)==n)
            printf("yes\n");
        else
            printf("no\n");
    }

return 0;
}
