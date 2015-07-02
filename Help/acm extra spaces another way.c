#include <stdio.h>
int main()
{
    freopen("input1.txt","r",stdin);
    int space(char s,int flag);
    int test;
    scanf("%d",&test);
    while(test--)
    {

        int lines;
        scanf("%d",&lines);

        int i;
        for(i=0; i<lines; i++)
        {
            char s;
            int flag=0;
            while(scanf("%c",&s)==1)
            {

                if(s==' ')
                {
                    if(flag==0){
                        printf(" ");
                        flag=1;
                    }

                }
                else
                {
                    printf("%c",s);
                    flag=0;

                }
            }
        }
    }
}
