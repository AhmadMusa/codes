#include<cstdio>
#include <string.h>
#include <string>
#include <cctype>
#include<algorithm>
#include<queue>
#include<iostream>
#include<vector>
#include <stack>
#include<map>
#define mem(x,y) memset(x,y,sizeof(x))
#define read(x) freopen(x,"r",stdin)
#define limit 1000000000/*size of integers array*/
using namespace std;

int main()
{
    read("input1.txt");
    int test,cases=1;
    cin>>test;
    getchar();
    while(test--)
    {
        stack<string>backward;
        stack<string>forwardstk;

        int currPos=0, total=0;
        cout<<"Case "<<cases++<<":"<<endl;
        string currPage("http://www.lightoj.com/");
        while(1)
        {
            string instruction;
            cin>>instruction;
            string endInput("QUIT");
            string visit("VISIT");
            string Back("BACK");
            string Forward("FORWARD");
            if(instruction==visit)
            {
                backward.push(currPage);
                cin>>currPage;
                while(forwardstk.size()>0)
                {
                    forwardstk.pop();
                }
            }
            else if(instruction==Back)
            {
                if(!backward.size()){
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    forwardstk.push(currPage);
                    currPage=backward.top();
                    backward.pop();
                }
            }
            else if(instruction==Forward)
            {
                if(!forwardstk.size())
                    {
                        cout<<"Ignored"<<endl;
                        continue;
                    }
                else
                {
                    backward.push(currPage);
                      currPage=forwardstk.top();
                    forwardstk.pop();
                }
            }
            else if(instruction==endInput)
                break;
            cout<<currPage<<endl;
        }
    }
    return 0;
}
