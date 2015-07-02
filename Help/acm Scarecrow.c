#include <stdio.h>
int main()
{

    int test,c=1;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        int i,flag=0,pos=0,count=0;
        scanf("%s",&s);
        for(i=0; i<n; i++)
        {
            if(flag==1 && s[i]!='#')
            {
                count++;
                flag=0;
                pos=i;

            }
            if(i==pos+3 || i==0)
            {
                if(s[i]!='#')
                {
                    count++;
                    pos=i;
                }
                else
                    flag=1;
            }
        }


        printf("Case %d: %d\n",c++,count);
    }
    return 0;
}
