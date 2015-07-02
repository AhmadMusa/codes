//ACCEPTED
#include <stdio.h>
#include <string.h>
int fx[8]= { 0,0,-1,-1,-1,1,1,1};
int fy[8]= { 1,-1,0,1,-1,0,1,-1};
int main()
{
    //freopen("input.txt","r",stdin);
    int r , c , loop =1 ;
    while(scanf("%d %d\n",&r,&c)==2 && r && c)
    {
        if(loop!=1)
            printf("\n");
        char str[101][101];
        int i , j;
        for( i=0; i < r; i++)
        {
            for( j=0 ; j < c; j++)
                scanf("%c",&str[i][j]);
            getchar();
        }
        int k=0;
        printf("Field #%d:\n",loop);
         for( i=0; i < r; i++)
        {
             for( j=0 ; j < c; j++)
             {
                 if(str[i][j]!='*')
                 {
                     int count=0;
                     for(k=0; k<8; k++)
                     {
                         int nx = i + fx[k];
                         int ny = j + fy[k];
                         if(nx>=0 && nx<r && ny>=0 && ny<c && str[nx][ny]=='*')
                            count++;
                     }
                     printf("%d",count);
                 }
                 else
                 {
                     printf("*");
                 }
             }
             printf("\n");
        }
        loop++;
    }
    return 0;
}
