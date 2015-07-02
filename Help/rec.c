#include <stdio.h>
int main()
{
    //sandhi, 1-10 sum koro :P
    //sandhi calling musa ;)
    int sum= musa(10);
    printf("%d",sum);
}
int musa(int n)
{
    if(n==1)
        return 1;// ami eita pari :P so eita amar base case

    int sum=musa(n-1); // ami parbo na , sandhi :P amake ektu komiye dao .. (1 kom kora holo ) ...
    return n+sum;
}
