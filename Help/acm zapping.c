#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        int i,j;
        if(a==-1 || b==-1)
            break;
       if(a-b >50)
       {
           printf("%d\n",99-a+b+1);
       }
       else if(b-a >50)
       {
           printf("%d\n",99-b+a+1);

       }
       else
       {
           printf("%d\n",abs(a-b));
       }
    }
    return 0;
}
