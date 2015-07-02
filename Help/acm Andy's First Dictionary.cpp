#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    string input;
    vector <string> store;
    int i=0;
    map<string, int> count;
    while(cin>>input)
    {
        char in[500];
        const char *cstr= input.c_str();
        int k=0;
        for(int j=0; j<strlen(cstr); j++)
        {
            if((cstr[j]>='A' && cstr[j]<='Z' ) || (cstr[j]>='a' && cstr[j]<='z'))
            {
                in[k++] = tolower(cstr[j]);
            }
            else
            {
                in[k]='\0';
                string token;
                token = in;
                if(token.size()>0)
                {
                    store.push_back(token);
                    count[token]++;
                    i++;
                }

                k=0;
            }
        }

        in[k]='\0';
        string token;
        token = in;
        if(token.size()>0)
        {
            store.push_back(token);
            count[token]++;
            i++;
        }

    }

    sort(store.begin(), store.end());

    for(int j=0; j<i; j++)
    {
        if(count[store[j]])
        {
            count[store[j]]=0;
            cout<<store[j]<<endl;
        }
    }
    return 0;
}
