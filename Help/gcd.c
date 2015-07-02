#include <stdio.h>
int main()
{
    int n1, n2;
    while(scanf("%d %d",&n1,&n2)==2){

    printf("%d",gcd(n1,n2));
}
}

int gcd(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
            return gcd(x-y,y);
        else
            return gcd(x,y-x);
    }
    return x;

}
