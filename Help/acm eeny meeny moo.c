#include <stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        int ans=0;
        i=1;
        while(ans!=2)
        {
            ans=josephus(n,i);
            i++;
        }
        printf("%d",i-1);
    }
}

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        /* The position returned by josephus(n - 1, k) is adjusted because the
           recursive call josephus(n - 1, k) considers the original position
           k%n + 1 as position 1 */
        return (josephus(n - 1, k) + k-1) % n + 1;
}
