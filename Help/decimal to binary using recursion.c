#include <stdio.h>
int main()
{
int n[2][3][2]={0,1,2,3,4,5,6,7,8,9,10,11};
printf("%d",n[0][2][0]);
}

void binary(int n)
{
    if(n==0)
        return;
    binary(n/2);

    printf("%d",n%2);
}
