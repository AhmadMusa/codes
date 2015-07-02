#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <cstdlib>
#include<vector>
#include <cmath>
using namespace std;
map<char , int > ca ;
map<char , int > cb;
vector<char> com;
map<char , int > tot;
int compare(string a , string b)
{
    const char *str = a.c_str();
    const char *s = b.c_str();
    int c =0;
    char coms[1000];

    for(int i =0; i<strlen(str); i++)
    {
        if(tot[str[i]]==0)
        {
            com.push_back(str[i]);
            tot[str[i]]=1;
        }
        if(i==0)
            {
                coms[c++]=str[i];
            }
        else
        {
            if(str[i]!=str[i-1]){
                coms[c++]=str[i];
            }
        }
    }

    coms[c]='\0';
    c=0;
    char comb[1000];
    int count=0;
    for(int j=0; j<strlen(s); j++)
    {
        if(j==0)
            {
                comb[c++]=s[j];
            }
        else
        {
            if(s[j]!=s[j-1]){

                 comb[c++]=s[j];
            }

        }
        if(tot[s[j]]==0)
        {
            com.push_back(s[j]);
            tot[s[j]]=1;
        }
    }
    comb[c]='\0';

   string mata(coms);
   string matb(comb);
   if(mata==matb)
    return true;

   return false;
}
int main()
{
    freopen("input.txt","r",stdin);
   // freopen("output.out","w",stdout);
    int test, cases=1;

    cin>>test;
    while(test--)
    {

        com.clear();
        tot.clear();
        int n ;
        cin>>n;
        string in[n+1];
        int ans =true;
        int total =0;
        for(int i=0; i<n ; i++)
        {
            cin>>in[i];
            total += in[i].size();
            if(i%2==1)
            {
                if(compare(in[i-1],in[i])==false)
                    ans = false;
                ca.clear();
                cb.clear();
            }
        }

        if(ans == true)
        {
            map<int , int > div;
            int mov =0;

            int t1=0, t2=0,m =0, sum=0;
            for(int j=0; j<com.size(); j++)
            {
                char ch=com[j];
                  t1=0;
                  int arr[1000];
                  int l =0, sum=0 ;
                for(int i=0; i<n; i++)
                {
int f=1;
                    for(int k=0; k<in[i].size(); k++)
                    {
                        if(ch==in[i].at(k))
                        {
                            if(f==1)
                            {
                                 t1++;
                                 f=0;
                            }
                            else
                            {
                                if(in[i].at(k)==in[i].at(k-1))
                                    t1++;
                            }
                        }
                    }

                    arr[l++]=t1;
                    sum+=t1;
                t1=0;
                }
                 sum = sum/n;

                for(int o=0; o<l; o++)
                {
                    mov += fabs(arr[o]-sum);
                }

            }


            printf("Case #%d: %d\n",cases++,mov);
        }
        else
        {
            printf("Case #%d: Fegla Won\n",cases++);
        }


    }
}
