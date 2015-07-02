#include <stdio.h>
#include <iostream>
#include <set>
#include <list>
#include <vector>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int junc, road, endp[1000];
        vector < int> lamp;
        vector <int> :: iterator itr;
//        newset.push_front(12);
//        newset.push_front(2);

        scanf("%d %d",&junc,&road);
        int temp;
        for(int i=0; i<road; i++)
        {
            scanf("%d %d",&temp, &endp[i]);
            lamp.push_back(temp);
        }

        for(itr=lamp.begin(); itr!=lamp.end(); itr++)
            cout<<*itr<<"\n";
    }
}
