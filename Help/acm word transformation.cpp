//ACCEPTED
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <algorithm>
#include <iterator>
#include <sstream>
using namespace std;
int save[20000];
int taken[20000] ;

vector < string > dictionary ;
vector < int > graph[2000];
map < string , int > convert ;
int p;

int strcm( string x , string y)
{
    const char *a= x.c_str();
    const char *b = y.c_str();
    int i =0 , len1 = strlen (a) , len2 = strlen (b) ,len ;
    if(len1==len2)
    {
        int total =0 ;
        for(i=0; i < len1 ; i++)
        {
            if(a[i]!=b[i])  total++ ;
        }

        if(total>1)   return 1;
        else  return 0;
    }
    else
        return 1;
}

int check(string str, int count)
{
    int i =0 ;
    for( i =0 ; i < count ; i++ )
    {
        if(strcm( str, dictionary[i] )==0)
        {
            if(convert.find(str)==convert.end())
            {
                convert[str]=p++;
            }
            if(convert.find(dictionary[i])==convert.end())
            {
                convert[dictionary[i]]=p++;
            }
            graph[convert[str]].push_back(convert[dictionary[i]]);
            graph[convert[dictionary[i]]].push_back(convert[str]);
        }
    }

}

int bfs(int src,int d)
{
    queue <int> Q;
    Q.push(src);
    memset(taken, 0, sizeof(taken));
    memset(save, -1, sizeof(save));

    taken [src]=1;
    int flag=0;
    while(!Q.empty())
    {
        int u=Q.front();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v=graph[u][i];
            if(!taken[v])
            {
                taken[v]=1;
                Q.push(v);
                save[v]=u;
                if(v==d)
                {
                    flag=1;
                    break;
                }
            }
        }

        if(flag==1)
        {
            int count =0;
            while(d!=src)
            {
                d=save[d];
                count++;
            }
            return count;

        }
        Q.pop();
    }
    return 0;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int tcases;
    cin >> tcases;
    getchar();
    while(tcases--)
    {
        string str;
        int count=0;
        while(cin >> str && str!="*" )
        {
            check(str,count);
            dictionary.push_back(str);
            count++;
        }
        string input;
        string c = "'\n'";
        getchar();
        while(getline(cin , input))
        {
if(input.size()==0)
    break;
            string buf;
            vector<string> tokens;
            stringstream ss(input);
            while (ss >> buf)
                    tokens.push_back(buf);
cout << tokens[0] <<" "<< tokens[1] <<" "<< bfs(convert[tokens[0]], convert[tokens[1]]) <<endl;
        }
        if(tcases!=0)
            cout<<endl;
        for(int i =0; i <= p ; i++)
            graph[i].clear();
        dictionary.clear();
        convert.clear();
        p=0;
    }
return 0;
}
