#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    long int t,cases=1;
    scanf("%d",&t);
    while(t--)
    {
       long  int r, g , b ,w ;
        scanf("%ld %ld %ld %ld",&r,&g,&b,&w);
        long int total =0;
        long int ans=0;
        if(r==0)
            {
                 if(w)
                {
                    r++;
                    w--;
                }
            }
            if(g==0)
            {
                if(w)
                {
                    g++;
                    w--;
                }
            }
            if(b==0)
            {
                 if(w)
                {
                    b++;
                    w--;
                }
            }
        while(r&&g&&b)
        {

            r--;
            g--;
            b--;
            ans++;
            if(r==0)
            {
                 if(w)
                {
                    r++;
                    w--;
                }
            }
            if(g==0)
            {
                if(w)
                {
                    g++;
                    w--;
                }
            }
            if(b==0)
            {
                 if(w)
                {
                    b++;
                    w--;
                }
            }
        }
        printf("Case %ld: %ld\n",cases++,ans);


    }
    return 0;
}
