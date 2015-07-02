#include <stdio.h>
#include <string.h>

int ks[1001][40];

int max(int a, int b)
{
    return (a > b)? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if(ks[n][W])
        return ks[n][W];

    if (wt[n-1] > W)
        return ks[n][W] = knapSack(W, wt, val, n-1);


    else return ks[n][W] = max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                         knapSack(W, wt, val, n-1)
                       );
}
int main()
{
    freopen("input.txt","r",stdin);
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        memset(ks,0,sizeof(ks));
        int prices[1001], weights[1001];
        int i,objects;
        scanf("%d",&objects);

        for(i=0; i<objects; i++)
            scanf("%d %d",prices+i,weights+i);
        int p , sum = 0, wt;
        scanf("%d",&p);
        for(i=0; i<p; i++)
        {
            scanf("%d",&wt);
            sum+=knapSack(wt,weights,prices,objects);
        }
        printf("%d\n",sum);
    }
    return 0;
}
