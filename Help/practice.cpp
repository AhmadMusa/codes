#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        double l , d, s, c;
        scanf("%lf %lf %lf %lf",&l,&d,&s,&c);
        double pre = s, recent = s;
        int i=1;
        recent = s* pow(c+1,d-1);
        if(recent>=l)
            printf("ALIVE AND KICKING\n");
        else
            printf("DEAD AND ROTTING\n");

    }
    return 0;
}
