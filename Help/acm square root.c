#include <stdio.h>
#include <math.h>
#include <string.h>
char num[10000];
int main()
{
    long long i=0,t;
    scanf("%lld",&t);
    while(i<t)
    {
        int length, temp=0, s=0,y=0, j,k,t=0,count=1,got=0,save=0,sr=0, new=0;
        scanf("%s",&num);
        length=strlen(num);

        //if(length<19)
        //{
/////for(i=0;i<length;i++)
            //{
                //temp=temp*10 + (num[i]-'0');
            ///}

           // j=sqrt(temp);
           // printf("%d\n",j);
        //}
        //else
        //{
            //if(length%2==1)
            //{
                new=num[0]-'0';
                temp=sqrt(new);

                new=new-(temp*temp);
                sr=temp;
                temp=temp*2;
                while(1)
                {
                got=0;
                for(j=count;j<=count+1;j++)
                {
                    got=got*10 + (num[j]-'0');
                }
                got=got+ new*100;
                t=0,save=0;
                    for(k=1;t<got;k++)
                    {
                        s=save;
                        new=t;
                        for(;y>=0;y--)
                        {
                            temp=temp*10;
                        }
                        save=temp+k;
                        t= save*(k);
                    }
                    sr=sr*10+k-2;

                    new=got-new;

                    temp=s+k-2;
                    count=count+2;

                    if(new==0)
                        return 0;
                    y++;
                }
                printf("%d",sr);


            //}

       // }
    i++;
    }
    return 0;
}
