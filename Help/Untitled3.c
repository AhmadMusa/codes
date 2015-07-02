#include <stdio.h>
#include <math.h>
int main()

{
    int i=0,n;
    scanf("%d",&n);
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;

    for(i=3;i<=sqrt(n);i++)
        if(n%i==0)
    {
        return 0;
    }
    return 1;

}
