#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    string names[]={"Ahmad", "musa", "golap", "ashik", "arman"};

    set<string, less<string> > nameset(names,names+5);

    set<string, less<string> >:: iterator itr;

    nameset.insert("Abir Sir");

    itr=nameset.begin();
    while( itr!=nameset.end() )
    {
       cout<< *itr << "\n";
        itr++;
    }
    cout<<endl;
    return 0;
    }
