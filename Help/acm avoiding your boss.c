#include <stdio.h>
int main()
{

    int places, roads, boss_home, boss_office , my_home , market;

    while(scanf("%d %d %d %d %d %d",&places, &roads,&boss_home,&boss_office,&my_home,&market)==6)
    {
        int roadno[roads];
        int roadstart[5000],roadend[5000], cost[10000];
        int i,f=1,searching,cou=0;
        if(boss_home==my_home || boss_office==market)
        {
            f=0;
        }
        int roadst, roade, p;
        for(i=0; i<roads; i++)
        {
            scanf("%d %d %d",&roadst,&roade,&p);
            if(f==1)
            {
                if(roadst!=boss_home && roade!=boss_home && roadst!=boss_office && roade!=boss_office)
                {
                    roadstart[cou]=roadst;
                    roadend[cou]=roade;
                    cost[cou]=p;
                    cou++;
                }
            }
        }
        int costBal=0;
        /*Find out if the roads meet*/
        /*First check if i and boss are connected by same roads*/
        if(f==0)
            printf("MISSION IMPOSSIBLE.\n");
        else
        {
            searching = my_home;
            for(i=0; i<cou; i++)
            {
                if(searching==roadstart[i])
                {
                    costBal+=cost[i];
                    searching=roadend[i];
                    if(roadend[i]==market)
                    {
                        printf("%d\n",costBal);
                        break;
                    }
                }
                else
                {
                    costBal=0;
                    searching=my_home;

                    if(searching==roadstart[i])
                    {
                        costBal+=cost[i];
                        searching=roadend[i];
                        if(roadend[i]==market)
                        {
                            printf("%d\n",costBal);
                            break;
                        }
                    }
                }
            }
            if(i==cou)
                printf("MISSION IMPOSSIBLE.\n");
        }

    }
    return 0;
}
