#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> myv;
    vector<int>::iterator it;

    for(int i =1; i<=5 ; i++)
    {
        int t;
        scanf("%d",&t);
        myv.push_back(t);
    }

    it = myv.end();

    myv.erase(it);
    for(int i =0; i<5 ; i++)
    {
        cout<<myv[i]<<endl;
    }
}


