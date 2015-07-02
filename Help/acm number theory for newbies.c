#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(void const *a, void const *b)
{
    char *x=(char *)a;
    char *y=(char *)b;
    return *x-*y;
}
int main()
{
    char num[15];
    long long n;
    while(scanf("%s",&n)==1)
    {
        sprintf(num,"%lld",n);
        int i,min=10,max=0,pos;
        for(i=0;i<strlen(num);i++)
        {
            if(num[i]<min && num[i]!=0){
                    pos=i;
                min=num[i];
                }
            if(num[i]>max)
                max=num[i];
        }
        qsort(num,strlen(num),sizeof(num[0]),comp);
        char new[100];
        new[0]=min;
        for(i=0;i<strlen(num);i++)
        {

        }


    }
}
