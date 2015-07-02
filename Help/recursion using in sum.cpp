#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;
void call();
map<int , int> num;
vector<int> v;
int main()
{
    freopen("input.txt","r",stdin);
    call();
    for(int i=0; i<v.size() ; i++)
    {
        printf("%d %d\n",v[i],num[v[i]]);
    }
    return 0;
}
void call()
{
    int n;
    int t=scanf("%d",&n);
    if(t==-1)
        return;
    if(num[n]==0)
        v.push_back(n);
    num[n]++;
    call();
}
