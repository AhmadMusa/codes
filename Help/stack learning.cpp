#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    list<int>thelist;
    for(int k=0;k<4;k++)
        thelist.push_back( arr[k] );
    list<int>::iterator itr;
    for(itr=thelist.begin();itr!=thelist.end();itr++)
        cout<<*itr <<" ";

    itr=find(thelist.begin(),thelist.end(),4);

    if(itr!=thelist.end())
       cout<<"Found 4 ";
    else
        cout<<"Not found";

    return 0;
}
