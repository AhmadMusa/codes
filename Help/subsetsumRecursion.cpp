#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>
#include <cstdio>
using namespace std;
int target, sum=0;
vector<int> saveSet;

int main()
{
//    freopen("input.txt","r",stdin);
    int test;
    cin>>test;
    while(test--)
    {

        int num;
        cin>>num;

        int Set[1000];
        for(int i=0; i<num; i++)
            scanf("%d",&Set[i]);
        saveSet.clear();
        int total=0, avg =0;
        target = num/2;

        for(int i=0; i<num; i++)
            total+=Set[i];


        avg = total / 2;
        int nearest=0, diff=32767;


        for(int i=0; i<saveSet.size(); i++)
        {
            if(fabs(saveSet[i]-avg)<diff)
            {
                diff = fabs(saveSet[i]-avg);
                nearest = saveSet[i];
            }
        }

        cout<<total%nearest<<endl;
    }
    return 0;
}
