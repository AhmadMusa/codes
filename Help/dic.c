#include <stdio.h>
#include <string.h>
int wv[1000];
int cock[1000];
int roadstart[1000], roadend[1000];

int main()
{
    long int t,cases=1;
    scanf("%ld",&t);
    while(t--)
    {
        int city , m;
        scanf("%d %d",&city,&m);


        int i;
        for(i=1; i<=city; i++)
            scanf("%d",&wv[i]);


        for(i=1; i<=city; i++)
            scanf("%d",&cock[i]);


        int curr;
        int total=0;

        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&roadstart[i], &roadend[i]);

        }
int f=0;
        for(i=1;i<=m;i++)
        {
             if(i==1)
                curr=roadstart[1];

            if((wv[roadstart[i]] ||  (curr==roadstart[i] && i==1)) || wv[roadend[i]])
            {
                if(wv[roadstart[i]] || (curr==roadstart[i] && i==1))
                {
                    total=total+(cock[roadstart[i]]);
                    cock[roadstart[i]]=0;
                    wv[roadstart[i]]--;
                    curr=roadstart[i];

                }

                if(wv[roadend[i]] )
                {
                    total=total+cock[roadend[i]];
                    cock[roadend[i]]=0;
                    wv[roadend[i]]--;
                    curr=roadend[i];
                }

            }
        }



        printf("Case %ld: %d\n",cases++,total);
        total=0;

    }
    return 0;

}



