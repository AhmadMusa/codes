#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <cstring>
#include <string>

using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    long long int a, b, w, x, c;
    while(cin>>a>>b>>w>>x>>c)
    {
        long long int count=0;
        while(c>a)
        {
            if(b>=x)
            {
               b=b-x;
            }
            else
            {
               a--; b= w- (x-b);
            }
            c--;
            count++;
        }
        cout<<count<<endl;
    }
}
