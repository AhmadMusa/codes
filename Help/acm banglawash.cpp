#include <stdio.h>
int  main()
{
    freopen("cr.txt","r",stdin);
     int test, match, cases=1;
     scanf("%d",&test);
     while(test--)
     {
         scanf("%d",&match);
         getchar();
         int b=0,w=0, t=0, a=0;
         int x=match;
         char c;
        while(match--)
         {
             scanf("%c",&c);
             if(c=='B')
                b++;
             else if(c=='W')
                w++;
             else if(c=='T')
                t++;
             else
                a++;
         }
getchar();
         if(w==b)
         {
             if(x==a)
                printf("Case %d: ABANDONED",cases++);
             else
                 printf("Case %d: DRAW %d %d",cases++,b,t);
         }
         else if(b>w)
         {
             if(x==b+a)
                printf("Case %d: BANGLAWASH",cases++);
             else
                 printf("Case %d: BANGLADESH %d - %d",cases++,b,w);
         }
         else if(w>b)
         {
              if(x==w-a)
                printf("Case %d: WHITEWASH",cases++);
             else
                 printf("Case %d: WWW %d - %d",cases++,w,b);
         }
         printf("\n");
         b=0,w=0, t=0, a=0;
     }

     return 0;
}
