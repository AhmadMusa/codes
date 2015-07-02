//list.cpp
#include <iostream>
#include <algorithm>
#include <functional>
#include <string.h>
#include <vector>
#include <list>
#include <deque>

using namespace std;
int main()
{

    vector<int> coll ;
    coll.push_back(2);
    coll.push_back(3);
    coll.push_back(6);
    coll.push_back(3);

   vector<int>::const_iterator  minpos= min_element(coll.begin(),coll.end());
    cout<<"Min: "<< *minpos << endl;

  vector<int>::const_iterator maxpos= max_element( coll.begin() , coll.end());
  cout<< "Max: "<< *maxpos << endl;

 vector<int>::const_iterator pos;
 for(pos=coll.begin(); pos<coll.end();pos++)
    cout<< * pos << endl;

    sort (coll.begin(),coll.end());
cout<< "\n";
 for(pos=coll.begin(); pos<coll.end();pos++)
    cout<< * pos << endl;

       return 0;
}
