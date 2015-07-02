#include <stdio.h>
int main()
{
    int n;
    int c=1;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;

        int q[15], qn[15];
        int j,i;
        q[0]=n;
        for(j=1; j<13; j++)
        {
            scanf("%d",&q[j]);
        }
        for(j=0; j<12; j++)
        {
            scanf("%d",&qn[j]);
        }
        printf("Case %d:\n",c++);
        for(i=0; i<12; i++)
        {
            if(q[i]>=qn[i])
            {
                q[i+1]=q[i+1]+q[i]-qn[i];
                printf("No problem! :D\n");
            }
            else
            {
                q[i+1]+=q[i];
                printf("No problem. :(\n");
            }
        }
    }
    return 0;
}
