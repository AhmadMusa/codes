#include <stdio.h>
int main()
{
    //freopen("INPUT.txt","r",stdin);
    //freopen("OUTPUT.txt","w",stdout);
    int k,n, l, w, m, p=0;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    scanf("%d",&n);
    while(p<n)
    {
        scanf("%d",&l);
        for(w=1;w<=l;w++)
        {
            m=w;
            while(m!=0)
            {
                k=m%10;
                if(k==1)
                    b++;
                else if(k==2)
                    c++;
                else if(k==3)
                    d++;
                else if(k==4)
                    e++;
                else if(k==5)
                    f++;
                else if(k==6)
                    g++;
                else if(k==7)
                    h++;
                else if(k==8)
                    i++;
                else if(k==9)
                    j++;
                else
                    a++;
                m=m/10;
            }

        }
    printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);


        a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
        p++;
    }

return 0;
}
