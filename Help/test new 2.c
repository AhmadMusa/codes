#include <stdio.h>
int main()
{
    float x=0;
    int a;
    a=(float *)&x;
printf("%u %u",a,&x);
}

