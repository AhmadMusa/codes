#include <stdio.h>
int comp(const void *a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x-*y;
}

int main()
{
    char str[101];
    while(scanf("%s",&str)==1)
    {
        int num[51];
        int i,count=0;
        int size=strlen(str);
        for(i=0; i<size; i=i+2)
        {
            num[count++]=str[i]-'0';
        }

        qsort(num,count,sizeof(num[0]),comp);

        for(i=0; i<count-1; i++)
        {
            printf("%d+",num[i]);
        }
        printf("%d\n",num[count-1]);

    }
    return 0;
}
