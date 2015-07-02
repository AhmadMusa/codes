#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    string input;
    while(getline(cin, input))
    {
        stringstream in(input);
        int num, count=0;
        vector<int> n;
        stack<int> n_copy;
        stack<int> helpingStack;
        while(in>>num)
        {
            n.push_back(num);
            n_copy.push(num);
            count++;
        }
        bool oneFound=false;
        int index = -1 ;
        int oneSt = -1;
        while(oneSt!=0 || index!=count-1)
        {
            oneFound=false;
            for(int i=0; i<count; i++)
            {
                if(oneFound==true)
                {
                    if(n[i]-n[i-1]!=1)
                    {
                        index = i-1;
                        break;
                    }
                    else
                        index= i;
                }
                if(n[i]==1)
                {
                    oneFound = true;
                    index = i;
                    oneSt = i;
                }
            }
            cout<<index<<endl;
            for(int i=index+1; i<count; i++)
            {
                helpingStack.push(n[i]);
            }
            int i =0;
            while(i<=index)
            {
                helpingStack.push(n[i]);
                i++;
            }
//            while(!helpingStack.empty())
//            {
//                n_copy.push(helpingStack.top());
//                helpingStack.pop();
//            }

            n.clear();
            while(!helpingStack.empty())
            {
                n.push_back(helpingStack.top());
                helpingStack.pop();
            }
//            for(int i=0; i<count; i++)
//                cout<<n[i]<<endl;
        }
    }
}
