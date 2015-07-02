#include <stdio.h>
#include <iostream>
int dancers[10000];
using namespace std;
int main()
{
     int m ,n ;
     while(scanf("%d %d",&n,&m)==2)
     {
         int  mn[m*3];
         for(int i=0;i<(m*3);i++)
           {
               scanf("%d",&mn[i]);
           }

           int flag1=0 , flag2=0 , flag3=0;
           for(int i=0;i<m*3;i++)
           {
               count++;
              if(dancers[mn[i]]==0)
              {
                  flag1=1;
                  dancers[mn[i]]=1;
              }
              else if(dancers[mn[i]]==1)
              {

              }
           }



        }
     }
}
