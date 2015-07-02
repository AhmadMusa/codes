#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main ()
{
    freopen("new.txt","r",stdin);

    int t, i=0;
    while(scanf("%d",&t)==1)
    {
    string a[100];
    string b[100];
        i=0;
        if(t==0)
            break;
        int save=t;
        getchar();
        while(t--)
        {
            getline(cin,a[i]);
            getline(cin,b[i++]);
        }
        string s;
        getline(cin,s);
        i=0;
        string app;
        while(i<save)
        {
            std::size_t found = s.find(a[i]);
            if (found!=string::npos)
            {
                s.erase(found,a[i].length());
                app.insert(0,s,0,found);

                int  slen= app.length();
                app.insert(slen,b[i]);
                slen= app.length();
                app.insert(slen,s,found,s.length());
                s=app;
                app.clear();

            }
          else
            i++;
        }
            cout<<s<<endl;
    }
}

