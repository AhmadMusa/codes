#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
    int test,cases=1;
    cin>>test;
    while(test--)
    {
        int number, len ;
        cin>>number>>len;
        string input[number+1];
        string match[number+1];
        map<string, int> m;
        for(int i=0; i<number; i++)
        {
            cin>>input[i]; m[input[i]]++;
        }
        map<string, int> mymap;
        int count=0;
        for(int i=0; i<number; i++)
        {
            cin>>match[i] ; mymap[match[i]]++;
            if(m[match[i]])
                count++;
        }
        if(count==number)
        {
            printf("Case #%d: 0\n",cases++);
            continue;
        }
        int position = 0 ;
        while(position!=len)
        {
            int i=0;
            for( i=0; i<number; i++)
            {
                const char *str = input[i].c_str();
                char cstr[len+1] ;
                int k;
                for( k=0; k<len; k++)
                    cstr[k] = str[k];
                cstr[k]='\0';
                int n = cstr[position]-'0';
                n = !n;
                cstr[position]=n+'0';
                string newstr(cstr);
                if(mymap[newstr]==0)
                    break;
            }
            if(i==number)
                break;
        position++;
        }
        if(len!=position)
        {
            printf("Case #%d: %d\n",cases++,position);
        }
        else
        {
            printf("Case #%d: NOT POSSIBLE\n",cases++);
        }

    }
    return 0;
}
