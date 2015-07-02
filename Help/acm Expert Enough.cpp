#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int test;
    cin>>test;
    while(test--)
    {
        int database;
        cin>>database;
        vector<string> name;
        vector<long int> part1;
        vector<long int> part2;

        while(database--)
        {
            string str;
            long int l, w;
            cin>>str>>l>>w;
            name.push_back(str);
            part1.push_back(l);
            part2.push_back(w);

        }
         int query;
        cin>>query;
        while(query--)
        {
            long int price, count=0;
            cin>>price;
            string ans ;
            for(long int i=0; i<part1.size(); i++)
            {
                if(price>=part1[i] && price<=part2[i])
                {
                    ans = name[i];
                    count++;
                }
            }
            if(count==1)
            {
                cout<<ans<<endl;
            }
            else
                printf("UNDETERMINED\n");
        }
        if(test)
            cout<<endl;
    }
    return 0;
}
