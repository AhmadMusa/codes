#include <stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    int i,multya=a,multyb=b;
    if(a==1 || b==1)
        printf("%d",a*b);

    else
    {
        int j=1,k=1;
        for(i=1;;i++)
        {
            count++;
            multya=a*(j++);
            if(multya==multyb)
                break;
            else if(multya<multyb)
                continue;
            multyb=b*(k++);
        }
        printf("%d",multyb);
    }
}
