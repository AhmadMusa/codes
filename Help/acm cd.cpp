#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
long long int num[10000001];
int main()
{
freopen("input.txt","r",stdin);

    long long int n, m;
    while(scanf("%lld %lld",&n,&m)==2 &&n &&m)
    {
memset(num,0,sizeof(num));
         vector<long long int> store;
        long long int temp ;
        while(n--)
        {
            scanf("%lld",&temp);
            store.push_back(temp);
        }

        while(m--)
        {
            scanf("%lld",&temp);
            num[temp] = 1 ;
        }
        long long int count=0;
        for(long long int i=0; i<store.size(); i++)
        {
            if(num[store[i]]==1)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;

}
