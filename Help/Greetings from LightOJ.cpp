#include <stdio.h>
int main()
{
   int n;
    while(scanf("%d",&n)==1)
    {
        if(n!=42)
        {
            printf("%d\n",n);
        }
        else
            break;
    }
return 0;
}
