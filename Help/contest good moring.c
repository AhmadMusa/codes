#include <stdio.h>
int main()
{
    freopen("too.txt","r",stdin);
    int test,cases=1;
    scanf("%d",&test);
    while(test--)
    {
        getchar();
        char str[1000];
        gets(str);
        int g=0, o=0, d=0 , m=0 , r=0 , n=0, i=0 ;
        int k=0;
        for(k=0; str[k]!='\0'; k++)
        {
            if(str[k]=='g')
                g++;
            else if(str[k]=='i')
                i++;
            else if(str[k]=='m')
                m++;
            else if(str[k]=='d')
                d++;
            else if(str[k]=='o')
                o++;
            else if(str[k]=='r')
                r++;
            else if(str[k]=='n')
                n++;
        }
        int temp=0 ;
        if(g/2)
            temp++;
        if(o/3)
            temp++;
        if(i/1)
            temp++;
        if(m/1)
            temp++;
        if(n/2)
            temp++;
        if(d/1)
            temp++;
        if(r)
            temp++;
        if(temp>=7)
        {
            temp=temp + (g-2)/2 + (o-3)/3 + (r-1)/1 + (m-1) + (n-2)/2 + (d-1) + (i-1);
        }
        printf("Case#%d: %d\n",cases++,temp);
    }
    return 0;
}
