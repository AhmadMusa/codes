#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    vector<string> myvector;

    myvector.push_back("dudes");
    myvector.push_back("fame");
    myvector.push_back("names");

    vector<string> :: const_iterator itr;

    for(itr=myvector.begin();itr<myvector.end();itr++)
        cout<<*itr<<endl;
return 0;
}
