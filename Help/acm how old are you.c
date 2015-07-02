#include<stdio.h>
#include<math.h>

int main()
{
    freopen("mar.txt","r",stdin);
    freopen("mar1.txt","w",stdout);


    int c=1,test;
    scanf("%d",&test);
    while(test--)
    {
        int day1,mon1,year1,day2,mon2,year2;
        scanf("%d/%d/%d",&day1,&mon1,&year1);
        scanf("%d/%d/%d",&day2,&mon2,&year2);

        int n1=0, n2=0, ans=0;
        n1=n(day1,mon1,year1);
        n2=n(day2,mon2,year2);
        if(mon2==2 && day2==29)
            ans=(n1-n2)/366;
        else
             ans=(n1-n2)/365;

        if(ans<0 || (n1-n2)<0)
            printf("Case #%d: Invalid birth date\n",c++);
        else if(ans>130)
            printf("Case #%d: Check birth date\n",c++);
        else
            printf("Case #%d: %ld\n",c++,ans);

    }
}

int n(int day,int mon,int year)
{
    if(mon<=2)
    {
        mon+=13;
        year--;
    }
    else
        mon++;

    int nvalue= (1461*year)/4 + (153 * mon)/5 + day;
    if(year>=1800 && year <=1900 )
    {
        if(year==1800)
        {
            if(mon>=3)
            {
                nvalue++;
            }
        }
        else if(year==1900)
        {
            if(mon<=2)
                nvalue++;
        }
        else
            nvalue++;
    }
    else if(year>=1700 && year<=1800)
    {
         if(year==1700)
        {
            if(mon>=3)
            {
                nvalue+=2;
            }
        }
        else if(year==1800)
        {
            if(mon<=2)
                nvalue+=2;
        }
        else
            nvalue+=2;
    }
    return nvalue;
}



