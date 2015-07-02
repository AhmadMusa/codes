#include <stdio.h>
int main()
{
    freopen("inputn.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    int t, i=0;
    while(scanf("%d",&t)==1)
    {
        int num=0,count=0,k=0,temp=0,z=0;
        long long int a[100];
    while(i<t)
    {

        scanf("%llu",&a[i]);
        i++;
    }

    for(i=0;i<(t-1);i++)
    {
        if(a[i+1]-a[i]==1)
        {
            if(count==0)
                num=a[i];
            count++;
        }
        else
        {
            if(count>0)
            {
                temp=num+count;

                if(temp%10==0)
                {
                    while(temp%10==0)
                    {
                        temp=temp/10;
                        z++;


                    }
                    temp=temp%10;

                    for(k=1;k<=z;k++)
                    {
                        temp=temp*10;
                    }

                }
                else
                {

                    temp=temp%10;


                }


                printf("0%lld-%lld\n",num,temp);

            }
            else
            {
                if(i==(t-2))
                    printf("0%lld\n",a[i+1]);
                else
                    printf("0%lld\n",a[i]);
            }
        }
    }

    }
}
