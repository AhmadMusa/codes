#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <vector>

#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    char str[1000];
    int num;
    while(scanf("%d %s",&num,&str)==2)
    {
        char match[1000];
        vector<int> number;
       typedef map < string, int > mymap;

        mymap newmap;
        for(int i=0; i<strlen(str); i++)
        {
            int c=0;
            for(int j=i; c<num && (i+num)<=strlen(str); j++)
            {
                match[c++]=str[j];
            }
            match[c]='\0';
//            printf("%s ",match);
            newmap[match]++;
        }

        mymap::iterator itr;
        int c=1;
        for(itr=newmap.begin(); itr!=newmap.end(); itr++)
        {
//            cout<<itr->first <<" "<< itr->second<<"\n";
            number.push_back(itr->second);
        }
        int max=0;
        for(int i=1; i<number.size(); i++)
        {
            if(max<number[i])
                max=number[i];
        }
        for(itr=newmap.begin(); itr!=newmap.end(); itr++)
        {
            if(max==itr->second)
            {
                cout<<itr->second<<"\n";
                break;
            }
        }
    }

return 0;
}



