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
    string s1, s2;

    while(cin>>s1)
    {
        string n1, n2;
        long int count1=0, save=0, count2=0;
        count1 = s1.size();
        int f=0;
        for(int i=0; i<s1.size() ; i++)
        {

            if(s1[i]=='|')
            {
                f=1;
                continue;
            }
            if(f==0)
                n1= n1+ s1[i];
            else
                n2= n2+s1[i];
        }

        string arekta;
        cin>>arekta;

        if(n1.size()<n2.size())
        {
            if(n1.size()+arekta.size() >= n2.size())
            {
                if((n1.size()+arekta.size() )== n2.size())
                {
                    n1 = n1+arekta;
                    cout<<n1<<"|"<<n2<<endl;
                }
                else
                {
                    long int t1 = n1.size(), t2 = arekta.size(), t3 = n2.size();

                    for(int i=0; i<(t3)-t1; i++)
                        n1 = n1+ arekta[i];
                    cout<<n1<<"|"<<n2<<endl;
                }
            }
            else
                printf("Impossible\n");
        }
        else if(n1.size()>n2.size())
        {
            if(n2.size()+arekta.size() >= n1.size())
            {
                if((n2.size()+arekta.size() )== n1.size())
                {
                    n2 = n2+arekta;
                    cout<<n1<<"|"<<n2<<endl;
                }
                else
                {
                    long int t1 = n1.size(), t2 = arekta.size(), t3 = n2.size();

                    for(int i=0; i<(t1)-t3; i++)
                        n2 = n2+ arekta[i];
                    cout<<n1<<"|"<<n2<<endl;
                }
            }
            else
                printf("Impossible\n");
        }
        else
            cout<<"Impossible"<<endl;

    }
    return 0;
}
