#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

/// this is game circle ///
/// this is game circle ///
long array[][9]= {9,9,9,9,9,9,9,9,9,
                  0,0,1,0,1,1,1,1,1,
                  0,0,1,0,1,1,1,1,1,
                  2,2,2,2,2,2,2,2,2,
                  9,9,9,9,9,9,9,9,9,
                  0,0,0,0,0,0,6,6,6,
                  4,4,4,4,4,4,4,4,4,
                  4,4,4,4,4,4,4,4,4,
                  0,0,0,0,0,0,0,0,9,
                  0,1,1,0,1,1,1,1,6,
                  0,0,0,0,0,6,6,6,6,
                  0,1,1,0,1,1,1,1,6,
                  0,0,9,9,9,9,9,9,9,
                  0,1,1,0,1,1,1,1,2,
                  0,1,1,0,1,1,1,1,2,
                  0,0,0,0,0,0,4,4,4,
                  0,0,0,9,9,9,9,9,9,
                  1,2,2,2,2,2,2,2,2,
                  1,2,2,2,2,2,2,2,2,
                  0,0,0,0,0,0,4,4,4,
                  0,0,0,0,9,9,9,9,9,
                  0,0,1,0,1,1,1,1,1,
                  0,0,1,0,1,1,1,1,1,
                  0,4,0,0,4,4,4,4,4,
                  0,0,0,0,9,9,9,9,9,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,4,4,4,4,4,4,
                  0,0,0,4,4,4,4,4,4,
                  0,0,0,0,0,9,9,9,9,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,4,6,
                  0,0,0,0,0,0,0,4,6,
                  0,0,0,0,0,9,9,9,9,
                  4,4,4,4,4,4,4,4,4,
                  4,4,4,4,4,4,4,4,4,
                  0,0,0,0,0,0,0,4,6,
                  0,0,0,0,0,0,9,9,9,
                  0,0,1,0,1,1,1,1,1,
                  0,0,1,0,1,1,1,1,1,
                  0,0,0,0,0,0,0,4,6,
                  0,0,0,0,0,0,9,9,9,
                  1,1,1,1,1,2,2,2,2,
                  1,1,1,1,1,2,2,2,2,
                  3,3,3,3,3,3,3,3,3,
                  0,0,0,0,0,0,0,9,9,
                  0,0,0,6,6,6,6,6,6,
                  0,0,1,0,1,1,1,1,1,
                  0,0,1,0,1,1,1,1,1,
                  0,0,0,0,0,0,0,9,9,
                  0,0,0,0,0,0,4,4,4,
                  0,0,0,0,6,6,6,6,6,
                  0,0,0,0,0,0,0,4,4,
                  0,0,0,0,0,0,0,9,9,
                  0,0,2,4,2,2,2,2,2,
                  0,0,2,4,2,2,2,2,2,
                  0,0,0,0,0,0,0,4,4,
                  0,9,9,9,9,9,9,9,9,
                  1,1,1,1,1,1,1,1,1,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,4,4,4,
                  0,0,0,0,0,0,0,0,9,
                  0,0,0,0,4,4,4,4,4,
                  0,0,0,0,4,4,4,4,4,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,9,
                  0,0,0,0,0,0,6,6,6,
                  0,1,1,0,1,1,1,1,2,
                  0,1,1,0,1,1,1,1,2,
                  0,0,0,0,0,0,0,0,9,
                  0,0,0,0,0,0,6,6,6,
                  1,1,1,1,1,1,1,1,1,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,9,
                  0,0,0,0,0,4,4,4,4,
                  0,0,0,0,0,4,4,4,4,
                  0,0,1,0,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,9,
                  0,0,1,0,1,1,1,1,1,
                  0,0,1,0,1,1,1,1,1,
                  0,0,1,0,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,0,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,0,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,0,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,0,
                  1,1,1,1,1,1,1,1,1,
                  0,0,0,0,0,0,0,0,0,
                  1,1,1,1,1,1,1,1,1
                 };
/// this is game circle ///
/// this is game circle ///


/// game statistics variables ///
long fow[3][11];
long wio[3][60];
long rio[3][60];
char man[3][26][51];
long rbo[3][51];
long wbo[3][51];
/// game statistics variables ///


/// wii=wicket in innings && calc=random number like calculator ///
/// otp=overs to play && pitch=difficulty to score ///
long um,hard,i,agg=10,calc,otp,wii,inn=0,target,x,pitch,tmp,j,umin,most,wofi,umm;
long l,u;
long run=0,wic=0,ball=0,ovs=0;
char ch[6];
/// um=ultimate menu && umin=ultimate menu innings ///
/// most=used for verifying 1st innings or 2nd innings in ultimate menu ///


void print()
{
    /// this will be printed when this is executed ///
    printf("####REAL CRICKET(demo)####\n\n");
    printf("INSTRUCTIONS:\n\nthe higher your aggression,higher the chance to get yourself out\nbut your scoring rate will increase with your aggression.\n\n");
    printf("you have to choose your aggression level 1 to 9\nset your aggression level in negative to terminate at the middle of the game.\n\n");
    printf("set your aggression level in 99 to see the ULTIMATE MENU\n\n");
    printf("hardness will effect on your chance of getting yourself out.\nhigher the hardness,higher the possiblity of FOW.\n\n");
    printf("you have to play this game in 2 player mode\n(may be with your friend)\n\n");
    printf("**BEST OF LUCK**\n\n\n");
    /// done printing ///
}


/// this is the ultimate menu ///
void ultimate()
{
    cout << endl;
    cout << "press 1 to know about this game" << endl;
    cout << "press 2 to see statistics of match" << endl;
    if(inn==2)cout << "press 3 to compare" << endl;
    cout << endl;

    cin >> um;

    cout << endl;

    umin=1;
    if(um==1)print();

    if(um==2 || um==3)
    {
        if(um==2)
        {

            cout << "which innings(1-2) ??" << endl;
            cout << endl;

            cin >> umin;
            cout << endl;
        }

        most=ovs;
        if(inn>=1 && umin==1)most=otp;

        cout << "press 1 for fall of wicket" << endl;
        cout << "press 2 for over by over run/wicket" << endl;
        cout << "press 3 for manhattan" << endl;
        cout << endl;

        cin >> umm;

        cout << endl;

        if(umm==1)
        {
            if(um==3)umin=1;
hell:
            j=wic;
            if(umin==1 && inn>=1)j=wofi;
            for(i=1; i<=j; i++)printf("%3ld   ",i);
            cout << endl;

            for(i=1; i<=j; i++)printf("%3ld   ",fow[umin][i]);
            cout << endl << endl;
            if(um==3)
            {
                umin++;
                um++;
                goto hell;
            }
        }

        if(umm==2)
        {
            if(um==3)umin=1;
            for(i=1; i<=most; i++)
            {
                printf("%2ld   %3ld/%ld      ",i,rbo[umin][i],wbo[umin][i]);
                if(um==3)printf("%2ld   %3ld/%ld",i,rbo[umin+1][i],wbo[umin+1][i]);
                cout << endl;
            }
            cout << endl;
        }

        if(umm==3)
        {
            if(um==3)umin=1;
hev:
            for(i=0; i<=25; i++)
            {
                for(j=1; j<=otp; j++)printf("%c",man[umin][i][j]);
                cout << endl;
            }

            cout << endl;

            if(um==3)
            {
                um++;
                umin++;
                goto hev;
            }
        }

    }

}
/// this will be modified again ///


int main()
{

    /// printing about game ///
    print();
    /// printing about game ///


    /// creating really <actually pseudo> random numbers ///
    l=time(NULL);
    u=l/3.5;
    srand(u);
    /// done creating ///


    /// game options ///
    printf("select hardness(40-75) ??\n");
    scanf("%ld",&hard);

    if(hard<40)hard=40;
    if(hard>75)hard=75;

    printf("how many overs to play ??\n");
    scanf("%ld",&otp);

    printf("how many wickets in innings ??\n");
    scanf("%ld",&wii);
    /// game options ///


    /// verifying is it 2nd innings or not ///
g:
    if(inn==1)
    {
        printf("*****2nd innings*****\n\ntarget %ld run(s)\n\n\n",target);
    }
    /// done verifying ///


    /// setting the hardness of scoring ///
    pitch=hard;
    /// done setting ///


    /// we are now into the game ///
    /// we are now into the game ///
    while(agg>-1)
    {

        /// this will always be printed ///
        if(inn==1)printf("your aggression(1-9) ??\t<need %3ld from %3ld>          <<99 for ULTIMATE MENU\n",target-run,otp*6-ball);
        if(inn==0)printf("your aggression(1-9) ??                                   <<99 for ULTIMATE MENU\n");
        /// done this section ///


        /// scanning aggression ///
        scanf("%ld",&agg);
        /// done scanning ///


        /// going for the ultimate menu ///
        if(agg==99)ultimate();
        /// done going ///


        /// this is at field game ///
        if(agg>0 && agg <10)
        {

            /// a ball has been bowled and starting operation ///
            ball++;
            x=rand();
            calc=x%90;
            printf("\n");
            /// done operating ///


            /// searching in the game circle ///
            /// searching in the game circle ///


            /// if it is out ///
            if(array[calc][agg-1]==9)
            {

                if(((x*11)%100)<pitch)
                {
                    printf("\nout\n");
                    wic++;
                    pitch+=wic;
                    fow[inn+1][wic]=run;    /// set the fow ///
                    wio[inn+1][ovs+1]++;    /// wicket fallen on that over ///
                }

                else printf("\n0 run(s)\n");
                printf("total %3ld/%ld\novers %ld.%ld\n\n",run,wic,ovs,ball%6);

            }
            /// done this section ///


            /// if it is not out ///
            else
            {

                printf("\n%ld run(s)\n",array[calc][agg-1]);
                run+=array[calc][agg-1];
                rio[inn+1][ovs+1]+=array[calc][agg-1];
                printf("total %3ld/%ld\novers %ld.%ld\n\n",run,wic,ball/6,ball%6);
            }
            /// done this section ///


            /// if this is end of over ///
            if(ball%6==0)
            {
                ovs++;

                rbo[inn+1][ovs]=run;    /// set run by over ///
                wbo[inn+1][ovs]=wic;    /// set wicket by over ///

                /// creating the manhattan ///
                man[inn+1][25][ovs]=ovs%10+48;    /// last digit of over ///

                for(i=1,j=24; i<=rio[inn+1][ovs]; i++)man[inn+1][j--][ovs]='#';  /// # for per run ///

                for(i=1; i<=wio[inn+1][ovs]; i++)man[inn+1][j--][ovs]='^';  /// ^ for per wicket top of runs ///

                /// extra printing after over ///
                printf("current run rate %.2lf\n",(double)run/ovs);    /// current run rate ///
                if(inn==1 && run<target && ovs<otp)printf("required run rate %.2lf\n",(double)(target-run)/(otp-ovs));    /// required run rate ///
                cout << endl;
                /// done this section ///

            }


            /// work after end of 1st innings ///
            if(inn==0 && (wic==wii || ball==(otp*6)))
            {
                printf("*****end of innings*****\n\n\n");
                target=run+1;    /// set the target ///
                inn++;
                wofi=wic;
                run=0,wic=0,ball=0,ovs=0;
                pitch=hard;
                goto g;    /// going as started ///
            }
            /// work done after end of 1st innings ///


            /// work after end of 2nd innings ///
            if(inn==1 && (wic==wii || ball==(otp*6) || run>=target))
            {
                printf("*****end of match*****\n\n\n");
                if(run>=target)printf("player 2 won by %ld wicket(s)\n\n\n",wii-wic);
                if(run==(target-1))printf("match tied\n\n\n");
                if(run<(target-1)) printf("player 1 won by %ld run(s)\n\n\n",target-run-1);
                inn++;
            }
            /// work done after end of 2nd innings ///


            /// after match formalities and terminating ///
            if(inn==2)
            {
                do
                {
                    printf("enter FINISH to terminate\n");    /// for terminating ///
                    printf("enter 99 for ultimate menu\n");    /// for match details ///
                    scanf("%s",ch);
                    if(!strcmp(ch,"99"))ultimate();
                }
                while(strcmp(ch,"FINISH"));
                agg=-1;    /// for negative aggression ///
            }
            /// after match formalities and terminating this is terminated ///

        }
        /// return from field game ///

    }
    /// we are now off the game ///
    /// we are now off the game ///

    return 0;
}
