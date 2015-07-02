#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
#include <string>
#define INF 10000000
#define mem(x,y) memset(x,y,sizeof(x))
#define READ(x) freopen(x,"r",stdin)
using namespace std;
map <long long  int , long long int> num;
map <long long int , long long int > arr;
vector <long long int > myv;

int main()
{
    //READ("input.txt");
    long long int n , i=0;
    while(scanf("%lld",&n)==1)
    {
         if(arr[n]!=1)
            myv.push_back(n);
        arr[n]=1;
        num[n]++;
    }
   vector <long long int >::iterator it;
   for(it=myv.begin() ; it!=myv.end()  ; it++)
   {
       long long int number = *it;
       printf("%lld %lld\n",number, num[number]);
   }


    return 0;
}
