#include <stdio.h>
int main()
{
    long  long int a=-105, n=1, ans;
    ans= a>>n | a<<(32-n)  ;
    printf("%d",ans);
}
