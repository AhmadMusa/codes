#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;

}

int sum(int n)
{
    if (n==0)
        return;
    else
        return n+sum(n-1);
}
