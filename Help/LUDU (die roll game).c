#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int start[10]= {12,14,29,40,56,91,67,68,50};
int end[10]= {8,36,4,80,48,34,93,65,79};

int player[1000001];
int flag[10000001];
int main()
{

    int match(int array1[],int array2[],int n);
    printf("        WELCOME TO LUDU by MUSA :p !\n\n  ");
    printf("     RULES :\n\n 1.EVERY ONE STARTS FROM 0.\n\n 2.IF YOU ROLL 1 u'll START THE GAME \n\n 3.WHOEVER GOES UP 100 WILL WIN THIS GAME\n\n");
    printf("     REMEMBER There will be snakes and ladders !! :P\n          \nGOOD LUCK !!\n\n");
    printf("        ===> ENTER NUMBER OF PLAYERS :\n\n");
    long long players;

    scanf("%lld",&players);
    int dieroll;
    int i;
    long long player_no=0;
    for(i=0; i<players; i++)
    {
        flag[i]=0;
        player[i]=0;
    }
    /*for(i=0; i<ladder_snake; i++)
    {
        scanf("%d %d",&start[i],&end[i]);
    }*/

    getchar();
    srand(time(0));
    int cou=-1;
    for(i=0;; i++)
    {
        printf(" player %d ! UR TURN !\nPlease press ENTER KEY and roll ur dice!\n\n",cou+2);

        getchar();

        system("cls");

        dieroll=rand()%6+1;
        printf("\n\n========= <<< %d >>> ============!!!!\n",dieroll);
        if(flag[++cou]==0)
        {
            if(dieroll==1)
            {
                printf("\nYEAH!! 1 !! U STARTED THE GAME!!\n");
                player[cou]+=dieroll;
                flag[cou]=1;
            }
            else
                printf("\nSorry ! Bro! U need 1 to start :P \n");
        }
        else
        {
            player[cou]+=dieroll;
        }


        int temp=match(start,end,player[cou]);
        if(temp!=0)
        {
            if(temp>player[cou])
                printf("YES! U HAVE JUST GOT A LADDER ON UR WAY! So you are UP from %d to %d\n\n",player[cou],temp);
            else
                printf("SHIT MAN!! A snake just caught you ! and you are DOWN from %d to %d :P \n\n",player[cou],temp);
            player[cou]=temp;
        }
        if(player[cou]>=100)
        {
            printf("CONGRATULATIONS!!! player %d WON THE GAME!!\n\n.THANK YOU FOR PLAYING.\n\n maximum credit goes to UVA\n compiled by Ahmad Musa,\n CSE,\n 2k12,\n KUET\n",cou+1);
            break;
        }

        printf("Position of Player %d IS NOW %d.\n\n\n",cou+1,player[cou]);

        if(cou==players-1)
            cou=-1;
    }
system("pause");

}
int match(int array1[],int array2[],int n)
{
    int i;
    for(i=0; i<9; i++)
    {
        if(n==array1[i])
        {
            int temp=array2[i];
            return temp;
            break;
        }
    }
    if(i==9)
        return 0;
}

