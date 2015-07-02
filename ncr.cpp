#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
unsigned long long combi(int n,int k)
{
    unsigned long long ans=1;
    k=k>n-k?n-k:k;
    ll j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
int main()
{
    ll n,r,p;
    while (scanf("%lld%lld",&n,&r)==2)
    {
        printf("%llu\n",combi(n,r));
    }
}
