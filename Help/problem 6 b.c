#include <stdio.h>
int main()
{
    int a , b ,c ;
    scanf("%d %d %d",&a,&b,&c);
    int l= lowest(a,b,c);
    printf("Lowest number is : %d",l);
}

int lowest(int a, int b , int c)
{
    int l;
    l=a;
    if(b<l)
        l=b;
    if(c<l)
        l=c;

    return l;
}
