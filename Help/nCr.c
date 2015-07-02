#include <stdio.h>
int dp[10001][10001];
int combination(int n, int r)
{
    if(n==r)
    {
        return 1;
    }
    if(dp[n][r]!=-1) return dp[n][r];
    if(r>n)
        return 0;
    if(n>1 && r>1)
        return dp[n][r] = combination(n-1,r) + combination (n-1,r-1);
    else
        return dp[n][r] = n;
}

int main()
{
    memset(dp,-1,sizeof dp);
    int n,r,c;
    n=1000,r=1000;
    combination(n,r);

}
