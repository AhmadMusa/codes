#include <stdio.h>
int dis(int x2, int y2, int x1, int y1)
{
    double t = 7;
    double t2 =  (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    t2=sqrt(t2);

    if(t2<=t)
        return 1;
    return 0;
}
int main()
{
   char str[101][101];
    int i , j ;
    for(i=1; i<=20; i++)
    {
        for(j=1; j<=20;j++)
        {
            if(dis(i,j,10,10))
                str[i][j]='.';
            else
                str[i][j]='#';
        }
    }

    for(i=1;i<=20;i++){
        for(j=1;j<=20;j++)
        {
            printf("%c",str[i][j]);
        }
    printf("\n");
}
}
