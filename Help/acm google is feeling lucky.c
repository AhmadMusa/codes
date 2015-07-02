#include <stdio.h>
int main()
{
    int test,loop=1;
    scanf("%d",&test);
    while(loop<=test)
    {
        int temp;
        char a[101],b[101],c[101],d[101],e[101],f[101],g[101],h[101],i[101],j[101];
        int n[10];
        int k=0;

        scanf("%s %d",&a,&n[k++]);
        scanf("%s %d",&b,&n[k++]);
        scanf("%s %d",&c,&n[k++]);
        scanf("%s %d",&d,&n[k++]);
        scanf("%s %d",&e,&n[k++]);
        scanf("%s %d",&f,&n[k++]);
        scanf("%s %d",&g,&n[k++]);
        scanf("%s %d",&h,&n[k++]);
        scanf("%s %d",&i,&n[k++]);
        scanf("%s %d",&j,&n[k++]);

        temp=sort(n);
        printf("Case #%d:\n",loop);
        if(n[0]==temp)
            printf("%s\n",a);
        if(n[1]==temp)
            printf("%s\n",b);
        if(n[2]==temp)
            printf("%s\n",c);
        if(n[3]==temp)
            printf("%s\n",d);
        if(n[4]==temp)
            printf("%s\n",e);
        if(n[5]==temp)
            printf("%s\n",f);
        if(n[6]==temp)
            printf("%s\n",g);
        if(n[7]==temp)
            printf("%s\n",h);
        if(n[8]==temp)
            printf("%s\n",i);
        if(n[9]==temp)
            printf("%s\n",j);

        loop++;
    }
    return 0;
}

int sort(int a[])
{
    int i=0,t=0;
    while(i<10)
    {
        if(a[i]>=t)
            t=a[i];
        i++;
    }
    return t;
}
