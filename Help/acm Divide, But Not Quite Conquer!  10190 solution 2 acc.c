#include <stdio.h>
#include <string.h>

char output[1000000], temp[1000000];
int addStr(char *des, int val, int len)
{

    if (!len)
        sprintf(des,"%d",val);
    else
    {
        int i, j;
        sprintf(temp," %d",val);
        int ln = strlen(temp);
        for (i=len, j=0 ; j<ln ; i++, j++)
        {
            des[i]=temp[j];
        }
        des[i]='\0';
        return (len+j);
    }
    return strlen(des);
}

int main()
{
    int n, m;
    while (scanf("%d %d",&n,&m)==2)
    {
        int lnt = 0;
        int b=0;
        if (n<2 || m<2)
        {
            printf("Boring!\n");
            continue;
        }
        while (n>1)
        {
            lnt=addStr(output,n,lnt);
            if (n%m != 0)
                b=1;
            n/=m;
        }
        lnt=addStr(output,n,lnt);


        if (b)
            printf("Boring!\n");
        else
            printf("%s\n",output);
    }
    return 0;
}
