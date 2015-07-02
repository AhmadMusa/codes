#include <stdio.h>
int main()
{
    int test,count=1;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char str[20];
        scanf("%s",str);

        int i,day=0;
        for(i=0; i<2; i++)
        {
            day=day*10+ (str[i]-'0');
        }

        char month[4];
        int c=0;
        for(i=3; i<6; i++)
        {
            month[c++]=str[i];
        }
        month[c]='\0';

        long int year=0;
        for(i=7; i<strlen(str); i++)
        {

            year=year*10+ (str[i]-'0');
        }

        int cal1[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
        int cal2[12]= {31,29,31,30,31,30,31,31,30,31,30,31};

        int flag;
        if((year%4==0 && year%100!=0) || (year%400==0))
        {
            flag=1;
        }
        else
            flag=0;
        int ans=0;
        if(flag==1)
        {
            if(strcmp(month,"JAN")==0)
            {
                ans=day;

            }
            else if(strcmp(month,"FEB")==0)
            {
                ans=31+day;
            }
            else if(strcmp(month,"MAR")==0)
            {
                ans=31+29+day;
            }
            else if(strcmp(month,"APR")==0)
            {
                ans=31+29+31+day;
            }
            else if(strcmp(month,"MAY")==0)
            {
                ans=31+29+31+30+day;
            }
            else if(strcmp(month,"JUN")==0)
            {
                ans=31+29+31+30+31+day;
            }
            else if(strcmp(month,"JUL")==0)
            {
                ans=31+29+31+30+31+30+day;
            }
            else if(strcmp(month,"AUG")==0)
            {
                ans=31+29+31+30+31+30+31+day;
            }
            else if(strcmp(month,"SEP")==0)
            {
                ans=31+29+31+30+31+30+31+31+day;
            }
            else if(strcmp(month,"OCT")==0)
            {
                ans=31+29+31+30+31+30+31+31+30+day;
            }
            else if(strcmp(month,"NOV")==0)
            {
                ans=31+29+31+30+31+30+31+31+30+31+day;
            }
            else if(strcmp(month,"DEC")==0)
            {
                ans=31+29+31+30+31+30+31+30+31+31+30+day;
            }


        }
        else
        {
            if(strcmp(month,"JAN")==0)
            {
                ans=day;

            }
            else if(strcmp(month,"FEB")==0)
            {
                ans=31+day;
            }
            else if(strcmp(month,"MAR")==0)
            {
                ans=31+28+day;
            }
            else if(strcmp(month,"APR")==0)
            {
                ans=31+28+31+day;
            }
            else if(strcmp(month,"MAY")==0)
            {
                ans=31+28+31+30+day;
            }
            else if(strcmp(month,"JUN")==0)
            {
                ans=31+28+31+30+31+day;
            }
            else if(strcmp(month,"JUL")==0)
            {
                ans=31+28+31+30+31+30+day;
            }
            else if(strcmp(month,"AUG")==0)
            {
                ans=31+28+31+30+31+30+31+day;
            }
            else if(strcmp(month,"SEP")==0)
            {
                ans=31+28+31+30+31+30+31+31+day;
            }
            else if(strcmp(month,"OCT")==0)
            {
                ans=31+28+31+30+31+30+31+31+30+day;
            }
            else if(strcmp(month,"NOV")==0)
            {
                ans=31+28+31+30+31+30+31+31+30+31+day;
            }
            else if(strcmp(month,"DEC")==0)
            {
                ans=31+28+31+30+31+30+31+30+31+31+30+day;
            }


        }

        if(ans<=300)
        {
            printf("Case %d: %d Hundreds\n",count,ans);
        }
        else if(ans<=360)
            printf("Case %d: %d Tens\n",count,ans%300);
        else
            printf("Case %d: %d Ones\n",count,(ans%360));

        count++;

    }
    return 0;
}
