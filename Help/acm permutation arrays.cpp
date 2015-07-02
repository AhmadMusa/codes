#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
#define MAX 2001
vector< double > input;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        double temp;
        double array[1000];
        int i=0;
        while(scanf("%lf",&temp)==1)
        {
            array[i++]=temp;
        }

        int j;
        for( j = i/2; j<i;j++)
        {
            input.push_back(array[j]);
        }

        sort(input.begin(),input.end());

        for(j=0;j<i/2;j++)
        {
            int t= array[j];
            printf("%d\n",input[t]);
        }

    }
    return 0;
}
