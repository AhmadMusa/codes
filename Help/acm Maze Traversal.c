#include <stdio.h>
int graph[60][60];
int main()
{
    freopen("new.txt","r",stdin);
    int test;
      int flag=0;
    scanf("%d",&test);

    while(test--)
    {
//        if(flag==1)
//        {
//            printf("\n");
//        }
//        flag=1;
        int r, c;
        scanf("%d %d",&r,&c);
        int i, j;

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                scanf("%d",&graph[i][j]);
        }

        int row, col;
        scanf("%d %d",&row,&col);
        int curr=0;
        char ch;

        while(scanf("[^\n]%c",&ch))
        {

            if(ch=='R')
            {
                curr++;
                if(curr>3)
                {
                    curr=3-curr;
                }
            }
            else if(ch=='L')
            {
                curr--;
                if(curr<0)
                {
                    curr=4-(-curr);
                }
            }
            else if(ch=='F')
            {
                if(curr==0)
                {
                    if(graph[row-1][col]==' ')
                        row--;
                }
                else if(curr==1)
                {
                    if(graph[row][col+1]==' ')
                        col++;
                }
                else if(curr==2)
                {
                     if(graph[row+1][col]==' ')
                        row++;
                }
                else if(curr==3)
                {
                    if(graph[row][col-1]==' ')
                        col++;
                }
            }
            else if(ch=='Q')
                break;
        }

       printf("%d %d\n",row,col);
    }
}
