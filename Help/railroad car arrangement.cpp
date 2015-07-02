#include <iostream>
#include <stdio.h>
#include <stack>
#include<cstdio>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<string>
#include<map>
#include<iterator>

bool Railroad(int p[],int n, int k)
{
    stack<int> *H;
    H= new stack<int> [k+1];

    int NowOut =1;
    int minH=n+1;
    int minS;
    for(int i=1; i<=n; i++)
    {
        if(p[i]==NowOut)
        {

            NowOut++;
            while(minH==NowOut)
            {
                NowOut++;
            }
        }
        else
        {
            if(!Hold(p[i]),minH,minS,H,k,n)
                return false;
        }
    }
    return true;
}

bool Hold(int c, int& minH, int &minS,stack<int> H[], int k , int n)
{

}

using namespace std;
int main()
{

}

