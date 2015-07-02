#include <stdio.h>
int main()
{
    int t, i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        int j,k,l,salary[3];
        for(j=0;j<3;j++)
        {
            scanf("%d",&salary[j]);
        }

        if(salary[0]>salary[1])
        {
                k=salary[0];
                salary[0]=salary[1];
                salary[1]=k;
        }
         if(salary[0]>salary[2])
        {
            k=salary[0];
            salary[0]=salary[2];
            salary[2]=k;
        }
        if(salary[1]>salary[2])
        {
            k=salary[1];
            salary[1]=salary[2];
            salary[2]=k;
        }

        printf("Case %d: %d\n",i,salary[1]);
        i++;
    }
    return 0;
}
