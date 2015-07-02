#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PB push_back
#define PI acos(-1.0)
#define LL long long

int main()
{
      char op[2],s[1000];
      LL n,a,l,i,b;
      while(scanf("%s %s %lld",s,op,&n)!=EOF)
      {
            if(s[0]=='0') {puts("0"); continue;}
            a=0;
            b=0;
            l=strlen(s);
            if(op[0]=='%')
            {
                  for(i=0;i<l;i++)
                  {
                     a=a*10+(s[i]-'0');
                     a=a%n;
                  }
                  cout<<a<<endl;
            }
            else if(op[0]=='/')
            {
                   for(i=0;i<l;i++)
                  {
                     a=a*10+(s[i]-'0');
                     if(a/n!=0) b=1;
                     if(b)
                     cout<<a/n;
                     a=a%n;
                  }
                  cout<<endl;
            }
      }
      return 0;
}
