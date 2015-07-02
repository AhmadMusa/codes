#include <stdio.h>
int main()
{

    int t, i=0;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(i<t)
    {
        int n[10];
        int j,z=0, count;
        for(j=0;j<10;j++)
        {
            scanf("%d",&n[j]);
            if(j>0)
            {
                count=n[j]-n[j-1];
                if(count>0)
                    z++;
                else
                    z--;
            }
        }
        if(abs(z)==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
        i++;
    }
    return 0;
}
