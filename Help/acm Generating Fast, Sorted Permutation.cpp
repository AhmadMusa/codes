# include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
vector <string> s[101];
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int i, int n)
{
   int j,v=0;
   static int p=0;
   if (i == n)
    {

           s[p].push_back(a);

        p++;
    }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j));
       }
   }
}

int main()
{
    int c=1;
    //freopen("new.txt","r",stdin);
    int test;
    scanf("%d",&test);
    int t=test;
    getchar();
    while(test--)
    {
        char str[1000];
        scanf("%s",str);
       for(int i=0;i<strlen(str);i++)
       {
           for(int j=i;j<strlen(str)-1;j++)
           {
               char t;
               if(tolower(str[j])>tolower(str[j+1]))
               {
                   t=str[j];
                   str[j]=str[j+1];
                   str[j+1]=t;
               }
           }
       }
        if(c!=1)
            printf("\n");
        permute(str,0,strlen(str)-1);
        sort(s.begin();s.end());

        for(int i=0;i<6;i++)
            {
                cout<<s[i]<<endl;
            }
        c++;
    }
    return 0;
}

