#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A[200000+1], B[200000+1], tree[200000+1], maxInd=0;
ll get(ll idx)
{
	ll sum =0;
	while(idx>0)
	{

		sum += tree[idx];
		idx -= (idx & (-idx));
	}
	return sum;
}
void update(ll idx, ll val)
{
	while(idx<=maxInd)
	{

		tree[idx] += val;
		idx += ( idx & (-idx));
	}
}
int main()
{
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    memset(tree,0,sizeof tree);
		scanf("%lld",&maxInd);
		for( ll i =0; i<maxInd; i++)
		{
			scanf("%lld",&A[i]);
			B[i] = A[i];
		}

		sort(B, B+maxInd);

		for( ll i =0; i<maxInd; i++)
		{
			ll rank = ll ( lower_bound(B,B+maxInd,A[i])-B);
			A[i] = rank + 1;
		}
		ll inv=0;
		for( ll i =maxInd-1; i>=0; i--)
		{
			ll x = get(A[i]-1);
			inv += x;
			update(A[i],1);
		}

		printf("%lld\n",inv);

	}
}
