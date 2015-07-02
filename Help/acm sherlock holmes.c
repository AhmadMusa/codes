#include <stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        float temp=0,ball,W=0,B=0, box[n];
        int countW=0,countB=0;
        scanf("%f",&ball);
        for(i=0;i<(n*2);i++)
        {
            scanf("%f",&box[i]);
        }
        for(i=0;i<(n*2);i=i+2)
        {
            if(box[i+1]-box[i]>0)
            {
                B=B+(box[i+1]/ball);
                printf("%f\n",B);
                countB++;
            }
            else
            {
                W=W+(box[i]/ball);
                countW++;
            }
        }
        W=W/countW;
        B=B/countB;
        if(W>B)
        {
            temp=(W-B);
            W=B-temp;
            if(W<0)
                printf("No solution\n");
            else
                printf("W %2.2f\n",W*100);
        }
        else
        {
            temp=(B-W);
            B=W-temp;
            if(B<0)
                printf("No solution\n");
            else
                printf("B %2.2f\n",B*100);
        }
    }
    return 0;
}
