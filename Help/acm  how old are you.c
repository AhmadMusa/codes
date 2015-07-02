#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test,i;
    scanf("%d",&test);
    for( i=0; i<test; i++)
    {
        int Dc,Mc,Yc,Db,Mb,Yb;
        scanf("%d/%d/%d%d/%d/%d",&Dc,&Mc,&Yc,&Db,&Mb,&Yb);
        if((Dc-Db)<0)
            Mc--;
        if((Mc-Mb)<0)
            Yc--;
        if((Yc-Yb)<0)
            printf("Case #%d: Invalid birth date\n",i+1);
        else if((Yc-Yb)>130)
            printf("Case #%d: Check birth date\n",i+1);
        else
            printf("Case #%d: %d\n",i+1,Yc-Yb);
    }
    return 0;
}
