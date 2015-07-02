#include <stdio.h>
int gcd(int n1,int n2)
{

    if(n2==0)
        return n1;
    else
        return gcd(n2, n1%n2);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;

}
